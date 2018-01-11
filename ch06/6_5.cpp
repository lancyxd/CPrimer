#include<iostream>
#include<string>
#include<vector>
using namespace std;


//6.44 inline func
inline bool is_shorter(const string &lft,const string &rht)
{
	return lft.size() < rht.size();
	
}

//6.54
int func(int m,int n);
using pFunc1=decltype(func)*;
typedef decltype(func) *pFunc2;
using pFunc3 = int (*)(int a, int b);
using pFunc4 = int(int a, int b);
typedef int(*pFunc5)(int a, int b);
using pFunc6 = decltype(func);




int main()
{
	cout<<is_shorter("hello","zello")<<endl;
	vector<pFunc1> vec1;
	vector<pFunc2> vec2;
}