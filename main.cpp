#include <stdio.h>
#include <iterator>
#include <numeric>
#include <stdlib.h>
#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <deque>
#include <fstream>
#include <forward_list>
#include <algorithm>
#include <functional>
#include <limits>
#include <map>
#include <typeinfo>
#include <memory>
#include<unistd.h>
#include<sys/types.h>
#include<queue>
// #include "ev.h"
// #include "ev++.h"
#include "Function.h"
using namespace std;
using std::cin;
using std::cout;
using std::deque;
using std::end;
using std::forward_list;
using std::ofstream;
using std::placeholders::_1;
using std::string;
using std::string;
using std::vector;
using namespace std::placeholders;
using std::list;
using std::numeric_limits;
using std::streamsize;

using namespace alg;
/*
static void timeout_cb(EV_P_ ev_timer *w, int revents)
{
	puts("timeout\n");
	ev_break(EV_A_ EVBREAK_ONE);
}
*/
//using std:algorthm
singleton *singleton::pInstance = NULL;
#define Test_Define( a, b) do {			\
  	*a=				\
	*b=990;					\
 					\
} while (0)

int main(int argc,char *argv[])
{
	array<int,10> MyArray;
	for(int i=0;i<10;i++)
		MyArray[i]=i;

	printf("hello\n");
	return 0;
}
#if 0
int main(int argc,char *argv[])
{
#if 0
	/*string word;*/
	//	vector<int> test( 10,1 );
	/*
	*	list如何增长空间
	*/
	log("assign");
	list<string> names;
	names.push_back("haha");
	names.push_back("hehe");
	names.push_back("heihei");
	names.push_back("enen");
	names.push_back("yaya");

	//print(names);
	//cout << *names.begin() << endl;
	vector<const char*>oldstyle;
	char string1[] = "hello,";
	char string2[] = "world";
	char string3[] = "fine";
	oldstyle.push_back(string1);
	oldstyle.push_back(string2);
	oldstyle.push_back(string3);
	names.assign(oldstyle.cbegin(), oldstyle.cend());
	//oldstyle.push_front("heihei");

	/*
	*
	*/
	log("insert");
	oldstyle.insert(oldstyle.cend(), "ok");
	oldstyle.insert(oldstyle.cend(), 3, "theendinsert");
	print(oldstyle);
	auto iter = oldstyle.begin();
	/*
	* 
	*/
	while (iter != oldstyle.end())
	{
		iter = oldstyle.insert(iter, *iter);
		iter += 2;
	}
	print(oldstyle);

	
	/*
	*
	*/
	/*
	log("plcace push_front");
	auto iter0 = names.cbegin();
	string word;
	while (cin>>word)
	{
		iter0 = names.insert(iter0, word);
	}
	print(oldstyle);
	*/

	/*
	*emplace_back,emplace_front, emplace
	*/
	log("emplace_back,emplace_front, emplace");
	list<Sale_Data>s_books;

	auto iter1 = s_books.begin();
	Sale_Data s_book0("2015226", 25.5, 89);
	s_books.push_back(s_book0);
	s_books.emplace(iter1, "201701055895", 58.5, 50);
	s_books.emplace_back("201701055895", 58.5, 50);
	s_books.emplace_front("20185689", 52.8, 80);

	/*
	*
	*/
	log("class dierctly  exchange");
	vector<int>test{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int>test2{ 9,8,7,6,5,4,3,2,1,0 };
	test = test2;
	for (vector<int>::iterator it = test.begin();it != test.end();++it)
	{
		cout << *it << endl;
	}
	double_and_insert(test2, 9);
	print(test2);


	/*
	*
	*/
	log("second search");
	if (SecondSearch(test, 5, test.begin(), test.end() - 1))
		printf("find it\n");


	/*
	*
	*/
	log("class function called");
	FriendTest friendtest(0);
	friendtest.print();
	Account bankeraccout;
	bankeraccout.print();
	/*
	*
	*/
	log("ifstream overload");
	/*cout << bankeraccout << endl;*/

	/*
	*
	*/
	/*
	log("write into till difference");
	int i = 1;
	float f = 2.1;
	printf("%d\n", i);
	printf("%f\n", f);
	printf("%s\n", "c++");
	while (cin >> i)
	{
		cout << "enter into success\n" << endl;
	}
	cout << i << endl;
	*/

	 /*
	* cpp primer 9.18
	 */
	 /*log("cpp primer 9.18");
	 printdeque();*/

	 /*log("cpp primer 9.19");
	 printlist();*/

	 /*
	 *cpp primer 9.20
	 */
	 /*log("cpp primer 9.20");
	 CopyFormDeque_odd_even();*/

	/*
	*
	*/
	log("access the begin and end elem");
	print(test2);
	if (!test2.empty())
	{
		auto label1 = *test2.begin();
		cout << label1 << endl;
		auto label2 = test2.front();
		cout << label2 << endl;

		auto endl2 = test2.back();
		cout << "the end1=" << endl2 << endl;
		auto end1 = *(test2.end() - 1);
		cout << "the end1=" << end1 << endl;
	}


	/*
	*
	*/
	log("Forbiden index overstep");
	vector<int> svec;
	svec.push_back(0);
	svec.push_back(1);
	//	cout << svec[0];
	cout << svec.at(0);

	/*
	* erase
	*/
	log("Erase");
	list<int> lst = { 0,1,2,3,4,5,6,7,8,9 };
	print(lst);
	lst.erase(lst.begin(), lst.end());
	/*auto it = lst.begin();
	while (it!=lst.end())
	{
		if (*it % 2)
		{
			it=lst.erase(it);
		}
		else
		{
			++it;
		}
	}*/

	/*
	*
	*/
	log("Directly Assign");
	int ia[10] = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> vecia{ ia,end(ia) };
	list<int> lstia{ vecia.begin(),vecia.end() };
	print(lst);
	log("delete odd and even");
	for (auto it = lstia.begin();it != lstia.end();)
	//for (auto it:lstia)
	{
		if (*it & 0x01) 
			it = lstia.erase(it);
		else
		{
			++it;
		}

	}
	for (auto it = vecia.begin();it != vecia.end();)
	{
		if (!(*it & 0x01))
		{
			it = vecia.erase(it);
		}
		else
		{
			++it;
		}
	}
	print(lstia);
	print(vecia);
	/*
	* forward_list
	*/
	log("forward_list");
	forward_list<int>forlist{ vecia.begin(),vecia.end() };
	//	forward_list<int>::iterator it = forlist.begin();
	forward_list<int>::iterator ittemp = forlist.before_begin();
	forlist.insert_after(ittemp, 99); 
	forlist.insert_after(ittemp, 98);
	forlist.insert_after(ittemp, 97);
	forward_list<int>::iterator it = forlist.begin();
	forlist.insert_after(it, 3, 88);
	forlist.insert_after(it, {});
	print(forlist);
	/*
	*
	*/

	/*
	* resize
	*/
	log("resize");
	forlist.resize(20);
	print(forlist);
	log("resize + n");
	forlist.resize(25, 1);
	print(forlist);


	/*
	*
	*/
	log("vector iterator lose efficacy");
	vector<int>::iterator it1 = vecia.end();
	vector<int>::iterator it2 = vecia.begin();
	vecia.push_back(99);
	//	cout << *it1 << endl;
	cout << *it2 << endl;
	log("deque iterator lose efficacy");
	deque<int> deq1;
	deq1.push_back(1);
	deq1.push_back(2);
	deq1.push_back(3);
	deque<int>::iterator it3 = deq1.begin();
	deque<int>::iterator it4 = deq1.end();
	deq1.push_back(4);
	print(deq1);
	/*cout << *it3<< endl;

	cout << *it4 << endl;
	*/
	/*
	* algorithm
	*/
	log("count");
	int icount = count(vecia.cbegin(), vecia.cend(), 9);
	cout << "the number " << icount << endl;
	log("accumulate");
	int isum = accumulate(vecia.cbegin(), vecia.cend(), 0);
	//string strsum = accumulate(oldstyle.begin(), oldstyle.end(), "");
	string strsum = accumulate(oldstyle.begin(), oldstyle.end(), string(""));
	cout << "the sum " << isum << endl;
	cout << "the strsum" << strsum << endl;
	log("Back_Inserter");
	fill_n(back_inserter(vecia), 9, 77);
	print(vecia);
	log("copy algorithm");
	int a1[] = {11,12,13,14,15,16,17,18,19};
	int a2[sizeof(a1)/sizeof(int)];
	auto ret = copy(begin(a1),end(a1),a2);
	/*for (int i = 0;i < sizeof(a1) / sizeof(int);i++)
	{
		cout << a2[i] << endl;
	}*/
	cout << endl;
	print(a2);
	print(vecia);
	log("replace");
	replace(vecia.begin(),vecia.end(),77, 66);
	print(vecia);

	
//	cout << *it4 << endl;
	log("replace_copy");
	vector<int>vecib;
	replace_copy(vecia.begin(),vecia.end(),back_inserter(vecib),66,77);
	vecib.insert(vecib.end(), 22);
	sort(vecib.begin(),vecib.end());
	print(vecib);
	
	log("unique");
	auto end_unique=unique(vecib.begin(),vecib.end());
	vecib.erase(end_unique, vecib.end());
	print(vecib);


	log("Predicate");
	print(names);
	list<string>namess;
	replace_copy(names.begin(),names.end(),back_inserter(namess),"","");
	print(namess);
	cout << *names.begin() << endl;


	vector<string> strname{"wangchunji","xulin","wangqiang"};
	//list
	print(strname);
	sort(strname.begin(), strname.end(), IsShorter);
	print(strname);

	/*
	*lambda
	*/
	log("lambda");
	f();
	


	/*
	*lambda stable_sort
	*/
	log("lambda stable_sort");
	names.push_back("hi");
	names.push_back("hi");
	names.push_back("hi");
	print(names);
	stable_sort(names.begin(), names.end(), [](const string &a, const string &b)
	{
		return a.size() < b.size();
	});
	log("After lambda stable_sort");
	print(names);

	
	log("find_if");
	int sz = 4;
	auto wc = find_if(names.begin(), names.end(), [sz](const string &a) {return a.size() >= sz;});
	cout << "The first elem satisied the require is  " << *wc << endl;


	/*
	*	
	*/
	log("for_each");
	for_each(wc, names.end(), [](const string &s) {cout << s << " ";});
	cout << endl;
	//cout << *names.end() << endl;


	log("Lambdaf1");
	auto lambdaf1 = [](int a, int b) {return a + b;};
	cout << "lambdaf1=" << lambdaf1(22,22)<<endl;
	//print(lambdaf1(33,33));
	//printf("%s\n",names.begin());
	

	log("lambdaf2");
	int elem = 5;
	auto lambdaf2 = [elem](int a){return a + elem;};
	cout << "lambdf2=" << lambdaf2(5) << endl;



	log("lambda biggies");
	biggies(strname,6);


	log("lambda transmit into tree parameter");
	biggies1(strname, 6);


	/*
	* blind
	*/
	log("blind");
	string s = "Hello";
	auto check = bind(check_size, _1, 6);
	bool b1 = check(s);
	cout << b1 << endl;

	log("biggies--->blind");
	biggies2(strname,6);




	/*
	* there is a string,find a nummer in a vector which is largeer than the length of string
	*/
	log("FindSpeciallNum int vector<int>");
	print(vecia);
	cout << s << endl;
	cout <<"the first speciall num is  "<< FindSpecialNum(s,vecia) << endl;
	log("Inserter,back_inserter,front_inserter");
	log("print test2");
	print(test2);
//	test2.back_insert(i);
	vector<int>testinsert1;
	list<int>testinsert2;
	vector<int>testinsert3;
	copy(test2.begin(),test2.end(),back_inserter(testinsert1));
	copy(test2.begin(),test2.end(),front_inserter(testinsert2));
	copy(test2.begin(),test2.end(),inserter(testinsert3,testinsert3.begin()));
	print(testinsert1);
	print(testinsert2);
	print(testinsert3);

	

	/*
	*iostream 
	*/
	log("iostream");
	vector<int> testinsert4;
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;
	while (in_iter!=eof)
	{
		log("Enter While");
		testinsert4.push_back(*in_iter++);
	}
	print(testinsert4);
	
	/*
	*	iostream_iterator accumulate 
	*/
	log("iostream_iterator accumulate");
	cout <<"*in_iter="<< *in_iter << endl;
	cout <<"*eof="<< *eof << endl;
	cout << accumulate(in_iter, eof, 0) << endl;


	log("ostream_iterator");
	ostream_iterator<int> out_iter(cout," ");
	for (auto e : testinsert3)
	{
		*out_iter++=e;
	}
	cout << endl;


	log(" ostream_iterator Second  Display");
	copy(testinsert3.begin(),testinsert3.end(),out_iter);
	cout << endl;

	/*
	* ???
	*/
	/*
	istream_iterator<Sale_Data> item_iter(cin),eof1;
	//istream_iterator<Sale_Data>eof;
	ostream_iterator<Sale_Data> out_iter(cout,"\n");
	Sale_Data sum = *item_iter++;
	while (item_iter!=eof1)
	{
		if (item_iter->isbn()==sum.isbn())
		{ 
			cout << endl;
		}
	}
	*/

	/*
	*
	*/
	//fflush(stdin);
	std::cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	log("Enter a series string into a vector");
	/*
	istream_iterator<string> FileCin(cin), eof2;
	while (FileCin != eof2)
	{
		//copy(strname.begin(),strname.end(),FileCin);
		log("The istream_iterator<string>,Enter into while");
		strname.push_back(*FileCin);
	}
	*/
	std::ifstream ifs("test.txt");
	istream_iterator<string> in(ifs), eof3;
	
	copy(in,eof3,back_inserter(strname));
	//copy(strname.cbegin(), strname.cend(), ostream_iterator<string>(cout,"\n"));
	print(strname);

	

	/*
	* 
	*/
	log("Enter Into some Integer and sort ,print");
	testinsert4.clear();
	istream_iterator<int> IntegerIstream(cin), eof4;
	while (IntegerIstream!=eof4)
	{
		testinsert4.push_back(*IntegerIstream++);
	}
	sort(testinsert4.begin(),testinsert4.end());
	print(testinsert4);

	/*
	* 
	*/
	log("Read Three File,divide even and odd");
	ifstream ifsnum("number.txt");
	istream_iterator<int> numberstream(ifsnum), eof5;
	ofstream ofsodd("numberodd.txt");
	ofstream ofseven("numbereven.txt");
	ostream_iterator<int> numeven(ofseven);
	ostream_iterator<int> numodd(ofsodd);
	cout << "*eof5="<<*eof5 << endl;
	while (numberstream != eof5)
	{
		if (*numberstream % 2)
		{
			log("This is odd");
			cout << *numberstream << endl;
			*numodd++ = *numberstream++;
		}
		else
		{
			//log("This is even");
			*numeven++ = *numberstream++;
		}
	}

	/*
	* reverse_iterator() 
	*/
	log("reverse_iterator print");
	//print(strname);
	/*auto flag = find(strname.cbegin(), strname.cend(),"to");
	cout << *flag << endl;
	cout << string(strname.crbegin(), flag) << endl;*/
	//for (vector<string>::reverse_iterator r_iter = strname.crbegin(); r_iter != strname.crend();++r_iter)
	for (auto r_iter = strname.crbegin(); r_iter != strname.crend();++r_iter)

	{
		cout << *r_iter << endl;
	}
	
	
	print(testinsert3);
	for (auto r_iter = testinsert3.crbegin();r_iter != testinsert3.crend();r_iter++)
		cout << *r_iter << endl;
	/*
	*
	*/
	int IterDis = 0;
	auto FlagZero =find(testinsert2.crbegin(), testinsert2.crend(),0);
	/*while (FlagZero != testinsert2.end())
	{
		IterDis++;
		FlagZero++;
	}*/
	cout << "IterDis=" <<distance(FlagZero, testinsert2.crend()) << endl;
///	cout << "IterDis=" << IterDis << endl;




	/*
	*
	*/
	//print(testinsert2);
	log("list unique");
	testinsert2.push_back(6);
	log("After Insert");
	print(testinsert2);
	testinsert2.sort();
	testinsert2.unique();
	log("After Unique");
	print(testinsert2);

	/*
	*
	*/
	log("count the word mount");
	std::cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	map<string, int> word_account;
	string word;
	while (cin>>word&&word!="end")
	{
		++word_account[word];
	}
	for (const auto &w : word_account)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;

	/*
	*  
	*/
	log("vector<pair()>");
	int PairInt;
	string PairString;
	vector<pair<string, int>> AssocativeContinerVector;
	while (cin>>PairString>>PairInt)
	{
	//	AssocativeContinerVector.push_back(pair< string, int>(PairString,PairInt));
	//	AssocativeContinerVector.push_back(make_pair(PairString, PairInt));
	//	AssocativeContinerVector.push_back({ PairString, PairInt });
		AssocativeContinerVector.emplace_back(PairString, PairInt );
	}
	for (auto it : AssocativeContinerVector)
	{
		cout << it.first << " " << it.second << endl;
	}
	//print(AssocativeContinerVector);

	/*
	* insert 
	*/
	log("count the word mount using insert");
	std::cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	/*map<string, int> word_account;
	string word;*/
	while (cin >> word&&word != "end")
	{
		auto map_it=word_account.insert({ word,1 });
		if (map_it.second)
			//map_it.second++;
			++map_it.first->second;
	}
	for (const auto &w : word_account)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;


	/*
	* map 
	*/
	log("Return KeyType Test");
	map<string, int> MapIndex{ {"wangchunji",23 }, {"XuLin",22}, {"Damon Wang",23} };
	cout << MapIndex["wangchunji"] << endl;
	//cout << decltype(MapIndex["wangchunji"]) << endl;
	using KeyType = map<string, int>::key_type;
	cout << "Type to subcript:" << typeid(KeyType).name() << endl;

	/*
	* map<string,vector<int>> 
	*/
	log("Map.find");
	map<string, vector<int>> MapFind{ {"wangchunji", { 99,98,97,95 }}, { "XuLin",{96,95,94,93} }, { "Damon Wang",{88,87,86,85} } };
	auto FindResult=MapFind.find("wangchunji");
	//cout << FindResult << endl;


#if 1
	/*
	*  
	*/
	log("Word Transfer");
	string filenamein = "Rule.txt";
	string filenameout = "Out.txt";
	ifstream ifsrule(filenamein);
	ifstream ifsout(filenameout);
	if (ifsrule && ifsout)
		word_transform(ifsrule, ifsout);
	ifsrule.close();
	ifsout.close();
#endif


	/*
	*	拷贝构造
	*/
	log("string first elem test");
	string test = "wangchunji";
	cout << static_cast<unsigned int>(test[0]) << endl;

	/*
	*	LeetCode Question:K-th Smallest Prime Fraction
	*/
	log("K-th Smallest Prime Fraction");
	vector<int> A = {1, 2, 3, 5};
	Solution FindTheKthFraction;
	vector<int> Answer = FindTheKthFraction.kthSmallestPrimeFraction(A, 3);
	print(Answer);

	/*
	*  libev test
	*/
	log("libev test");
	ev_timer timeout_watcher;
	struct ev_loop *loop = EV_DEFAULT;
	ev_timer_init(&timeout_watcher, timeout_cb, 5.5, 0);
	ev_timer_start(loop, &timeout_watcher);
	ev_timer_stop(loop, &timeout_watcher);
	ev_run(loop, 0);

	log("StrVec test");
	StrVec strvec;
	string s("wangchunji");
	strvec.Push_back(s);


	log("singleton");
	//pInstance->GetInstance();
	singleton* singleton = singleton::GetInstance();


	log("own -------String");
	String str("wangchunji");
	cout<<"the strlength="<<str.length()<<endl;

	log(" own -------string ");
	ownstring ownstring0;
	ownstring ownstring1("wangchunji");
	ownstring ownstring2=ownstring1;
	ownstring2.showstring();

	log("recongize the computer system is 32bits or 64bits-----1");
	int k=~0;
	if((unsigned int)k>65536)   cout<<"at least 32bits"<<endl;
	else 
		cout<<"16 bits"<<endl;

	log("recongize the computer system is 32bits or 64bits-----2");
	int i=65536;
	cout<<i<<endl;
	int j=65535;
	cout<<j<<endl;

	log("IsBigEndian  ");
	if(IsBigEndian(0x1234))
		cout<<"This Computer System is IsBigEndian"<<endl;
	else
		cout<<"This Computer System is IsSmallEndian"<<endl;
	
    log("Vector<String> push_back,watch the copy num");
	vector<String> StringPush;
	for(int i=0;i<10;i++)
		StringPush.push_back("Hehe");
	for(const auto &s:StringPush)
		cout<<s.c_str()<<endl;


	// log("OverLoad,input,output,addition");
	// Sale_Data isb;
	// cin>>isb;
	// cout<<isb<<endl;
#if 0
	 for (int i = 0; i < 5; i++)
	 {
		pid_t fpid = fork();
		if (fpid > 0)
		{
			cout << "This is Parent Process id"<<getpid()<<"  Ppid "<<getppid()<< endl;			
			ForkFunc();
		}
		else
		{
			cout << "This is child Process id"<<getpid()<<"  Ppid "<<getppid() << endl;
			ForkFunc();
		}
	}
	log("Fork end");

#endif
	log("stack");
	solution Stack;
	Stack.push(1);
	Stack.push(2);
	Stack.push(3);
	Stack.push(4);
	cout<<Stack.pop()<<endl;
	cout<<Stack.pop()<<endl;
	cout<<Stack.pop()<<endl;
	cout<<Stack.pop()<<endl;
	
    int a=99,b=99;
	Test_Define(&a,&b);
	cout<<"a="<<a<<"b="<<b<<endl;
#endif
#if 0
	LruCache<string,int> MyCache(5);
	MyCache.Insertlabelue("wangchunji",24);
	MyCache.Insertlabelue("XuLin",23);
	MyCache.Insertlabelue("TangBoWen",5);
	MyCache.Insertlabelue("TangDan",5);
	MyCache.Insertlabelue("TangQiang",5);
	MyCache.Insertlabelue("SunBoWen",5);
	MyCache.Display();
#endif
	/*
	if(argc!=2)
	{
		cout<<"error!,Please input the necessary filename" <<endl;
		return 0;
	}
	log("Users Account");
	string filenamein = argv[1];
	//string filenameout = "Out.txt";
	ifstream ifsrule(filenamein);
	if (ifsrule)
		UsersAccount(ifsrule);
	ifsrule.close();
	*/

	/*
	int array[14]={0};
	vector<int> Index;
	Index.push_back(1);
	Index.push_back(2);
	Index.push_back(3);
	Index.push_back(4);
	cout<<sizeof(Index)<<endl;
	cout<<sizeof(array)<<endl;
	memcpy(array,&Index,sizeof(Index));
	for(int i=0;i<14;i++)
	{
		cout<<array[i]<<endl;
	}
	*/

#if 0
	/*
	*  test the data type transfer
	*/
	int i=1,j=3;
	double k=0.5;
	k=double(i)/j;
	cout<<double(i)/j<<endl;
	cout<<k<<endl;
	system("pause");

	/* test the class Array2D*/
	Array2D<int>array2(3,4);
	array2.clear(1);

	/*test cpp class inherit*/
	using namespace cpporident;
	//Panda panda1("cat" ,"sichuan",10,true);
	Panda panda1("sichuan");
	panda1.PrintBaseInfo();
	panda1.color="read";
	panda1.PrintBaseInfo();

	/*test heap*/
	Heap<string> heap(10);
	heap.Push(3,"wcj");
	heap.Push(4,"xu");
	heap.Push(8,"wangqiang");
	heap.Push(2,"zhong");
	heap.printheap();

	/*test Stack*/
	Stack<int> MyStack(3);
	MyStack.push(2);
	MyStack.push(4);
	MyStack.push(6);
	MyStack.push(7);
	int elem=MyStack[4];
#endif
	/*
		using namespace copyinitlize;
		student s1(10);
		student s2(s1);//one constuction and two destruction
	*/
	/*
		//
		//word frequency query
		//
		string fileTrans = "english article.txt";
		string FileOut = "Out.txt";
		ifstream ifsin(fileTrans);
		if (ifsin)
		{
			TextQuery testquery(ifsin);
			testquery.PrintHighestWords(100,string("WordFreq.txt"));
			print(cout, testquery.query("Supreme"));
		}
		else 
			cout<<"ifstream error"<<endl;

	*/


	/*
	//
	//test the reOrderArray
	//
	vector<int> array;
	for(int i=1;i<8;i++)
		array.push_back(i);
    ReOrderArray reorderarr;
	reorderarr.reOrderArray(array);
	print(array);
	*/

	//
	//test find tht kth element form the last,construct the LinkList.
	//
	/*
	ListNode *pListHead=NULL;
	ListNode *pListRear=NULL;
	for(int i=1;i<7;i++)
	{
		ListNode *listNLink = (ListNode *)malloc(sizeof(ListNode));
		listNLink->label = i;
		listNLink->next = NULL;
		if (i == 1)
		{
			pListHead = listNLink;
			pListRear = listNLink;
		}
		else
		{
			pListRear->next = listNLink;
			pListRear = listNLink;
		}
	}
	LinkList list;
	ListNode*kth=list.ReverseList(pListHead);
	while(kth)
	{
		cout<<"label: "<<kth->label<<endl;
		kth=kth->next;
	}
	*/

	//
	//construct the binary tree
	//
/*
	//
	//test push_back
	// 
	vector<int> Test;
	for(int i=0;i<10;i++)
		Test.push_back(i);
	cout<<Test.size()<<endl;

	int k=1;
	vector<vector<int> > TestVector(4);
	//TestVector.clear();//添加此句编译不通过，定义好了大小不能再进行清除，否则后面分配会失败
	for(int i=0;i<4;i++)
		TestVector[i].resize(5);
	for(int i=0;i<4;i++)
		for(int j=0;j<5;j++)
			TestVector[i][j]=k++;
	for(int i=0;i<TestVector.size();i++)
		for(int j=0;j<TestVector[0].size();j++)
			cout<<TestVector[i][j]<<endl;
	VectorSolution vecsolu;
	vector<int> PrintVector= vecsolu.printMatrix(TestVector);
	for(auto iter:PrintVector)
		cout<<iter<<" "<<endl;


	StackMin stackmin;
	stackmin.push(6);
	stackmin.push(2);
	stackmin.push(3);
	stackmin.push(5);
	stackmin.push(1);
	cout<<"MinElem:"<<stackmin.min()<<endl;

	queue<int> TestQueue;
	TestQueue.push(1);
	TestQueue.push(2);
	TestQueue.push(3);
	TestQueue.push(4);
	cout<<TestQueue.back()<<endl;
	cout<<TestQueue.front()<<endl;
	while(!TestQueue.empty())
	{
		cout<<TestQueue.front()<<endl;
		TestQueue.pop();
	}

	// int *pBinaryTree=new int(10);
    // for(int i=0;i<10;i++)
	// 	*(pBinaryTree+i)=i;
	
	int i,j;
	TreeSolution<int,int> tree(NULL,0);
	vector<vector<int>> Road;
	vector<int> TreeSeq;
	TreeSeq.clear();
	TreeSeq.push_back(10);
	TreeSeq.push_back(5);
	TreeSeq.push_back(12);
	TreeSeq.push_back(4);
	TreeSeq.push_back(7);
	Road=tree.FindPath(tree.CreateTree(TreeSeq),22);
	for(i=0;i<Road.size();i++)
		for(j=0;j<Road[i].size();j++)
		    cout<<Road[i][j]<<" ";
	    cout<<endl;
*/
	

	#if 0

	//
	//contruct the randomlist
	//			
	int i;
	struct RandomListNode *pHead=NULL,*pRear=NULL,*p;
	for(i=1;i<=5;i++)
	{
		p=(struct RandomListNode*)malloc(sizeof(struct RandomListNode));
		p->label=i;
		p->next=NULL;
		if(!pHead)
		{
			pRear=p;
			pHead=p;
		}
		else
		{
			pRear->next=p;
			pRear=p;
		}
	}
	p=pHead;
	pRear=pHead;
	i=2;
	while(i)
	{
		p=p->next;
		i--;
	}
	pRear->random=p;

	pRear=pHead->next;
	p=pRear;
	i=3;
	while(i)
	{
		p=p->next;
		i--;
	}
	pRear->random=p;

	p=pHead->next;
	pRear=p;
	i=2;
	while(i)
	{
		pRear=pRear->next;
		i--;
	}
	pRear->random=p;

	//test the original data
	p=pHead;
	cout<<"the original data"<<endl;
	while(p)
	{
		cout<<"label "<<p->label<<" ";
		if(p->random)
			cout<<"random "<<p->random->label;
		cout<<endl;
		p=p->next;
	}
	struct RandomListNode *pHeadNew;
	RandomListSolution randlistsolu;
	pHeadNew=randlistsolu.Clone(pHead);

	//test the clone result
	cout<<"after desperate the data"<<endl;
	p=pHeadNew;
	while(p)
	{
		cout<<"label "<<p->label<<" ";
		if(p->random)
			cout<<"random "<<p->random->label;
		cout<<endl;
		p=p->next;
	}
	
	#endif

	return 0;
}
#endif	


