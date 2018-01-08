/*linux下编译该文件的命令：编译c++ 11新特性命令需加-std=c++11
g++ string.cpp -o string  -std=c++11 
*/
#include <iostream>
#include<string>
//using namespace std;
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string s1(10,'c');
	cout<<"s1 out:"<<s1<<"\n";

	string s2;
	cout<<"please input num:";
	cin>>s2;
	cout<<"s2 out:"<<s2<<endl;
/*
//读取未知数量的string
	string word;
	while(cin>>word) //反复读取直至到达文件末尾
		cout<<word<<endl;

//读取一整行
	string line;
	while(getline(cin,line))
		cout<<line<<endl;
*/

//c++11 新特性
	string str("hello world!!!!!!");

	for(auto c:str)
		cout<<c<<endl;

	decltype(str.size()) punct_cnt=0;
	for(auto c_s:str)
		if(ispunct(c_s))
			++punct_cnt;
	cout<<punct_cnt<<" charatters in"<<str<<endl;

	for (auto &c_s1:str)  //c_s1为引用,全部字符大写
		c_s1=toupper(c_s1);
	cout<<str<<endl;

	for(decltype(str.size()) index =0;index!=str.size()&&!isspace(str[index]);++index)
		str[index]=tolower(str[index]); //第一个字符转小写
	cout<<str<<endl;
}


