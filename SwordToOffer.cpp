#include<vector>
#include <iostream>
using namespace ::std;
using std::cout;
using std::endl;
using std::vector;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum)
    {        
        vector<vector<int>> TotalResult;
        vector<int> Result;
        int i,start,end,Temp1,Temp2,Mid,Remainder;
        end=array.size()-1;
         for(i=0;i<array.size();i++)
         {
            start=i+1;
            // printf("handle the index %d\n ",i);
            Remainder=sum-array[i];
            while(start<end)
            {
                
                Mid=(start+end)/2;
                // printf("current start %d,Mid %d,end %d Remainder %d,array[Mid] %d\n",start,Mid,end,Remainder,array[Mid]);
                if (Remainder > array[Mid])
                {
                    start = Mid + 1;
                }
                else if (Remainder < array[Mid])
                {
                    end = Mid - 1;
                }
                else
                {
                    Result.push_back(array[i]);
                    Result.push_back(array[Mid]);
                    TotalResult.push_back(Result);
                    Result.clear();
                    start=start+1;
                }
            }
        }
        if (TotalResult.size() == 1)
            return TotalResult[0];
        else
        {
            Mid = TotalResult[0][0] + TotalResult[0][1];
            int MinIndex = 0;
            for (i = 1; i < TotalResult.size(); i++)
            {
                if (TotalResult[i][0] + TotalResult[i][1] < Mid)
                    MinIndex = i;
            }
            return TotalResult[MinIndex];
        }
    }
    /*
*1-1  输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序 
*/

    vector<vector<int>> FindContinuousSequence(int sum)
    {
        int i,j;
        int tempsum=0;
        vector<vector<int>> result;
        vector<int> temp_order;
        int num=0;
        for(i=1;i<=sum/2+1;i++)
        {
           tempsum+=i;
           num+=1;
           if(num>=2&&tempsum==sum)
           {
               for(j=i-num+1;j<=i;j++)
                   temp_order.push_back(j);
               result.push_back(temp_order);
               temp_order.clear();
               i=i-num+1;
               num=0;
               tempsum=0;
           }
           if(tempsum>sum)
           {
               i=i-num+1;
               tempsum=0;
               num=0;
           }
        }
        return result;
    }
};


#if 1
int main()
{
    //
    //  1-1
    //

    vector<int> array={1,2,3,4,5,6,7};
    Solution solu;
    vector<int> Result=solu.FindNumbersWithSum(array,9);
    for(auto im:Result)
        cout<<im<<endl;

    #if 0
    vector<vector<int>> res;
    res=solu.FindContinuousSequence(9);
    for(auto it:res)
        for (auto im:it)
            cout<<im<<endl;
    #endif
    return 0;
}
#endif