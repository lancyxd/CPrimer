#include <iostream>
#include<string>
using namespace std;
//using std::cin;
int main()
{
	//3.6
	string str("hello world");
	for(auto &c:str)
		c='X';
	cout<<str<<endl;

	//3.7  不会改变
	string str1("hello world");
	for(auto c:str1)
		c='X';
	cout<<str1<<endl;

	//3.8
	string str2="hello world";
	cout<<str2.size()<<endl;
	for(int i=0;i<str2.size();i++)
		str2[i]='X';
	cout<<str2<<endl;
	
	string str3="hello world";
	int j=0;
	while(j<str3.size())
		str3[j++]='X';
	cout<<str3<<endl;
	
	//3.10
	string str4("?????hello,world!!!");
	for(auto k:str4)
		 if (!ispunct(k)) 
			 cout<<k;
	cout<<endl;
}


