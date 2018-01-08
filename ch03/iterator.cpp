#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s("some string");
	if(s.begin()!=s.end()){
		auto it=s.begin();
		*it=toupper(*it);
	}
	cout<<s<<endl;

	string s1("helloworld");
	for(auto it=s1.begin();it!=s1.end()&&!isspace(*it);++it)
		*it=toupper(*it);
	cout<<s1<<endl;
	

	//iterator语法
	vector<int>::iterator it;  //it能读写vector<int>元素
	string::iterator it2;      //it2能读写string对象中的字符
	vector<int>::const_iterator it3; //只能读元素，不能写元素
	string::const_iterator it4; //只能读字符，不能写字符

	vector<int> v;
	const vector<int> cv;
	auto it1=v.begin();  //it1的类型 vector<int>::iterator
	auto it2=cv.begin(); //it2的类型 vector<int>::const_iterator
	
	(*it).empty();//解引用it，然后调用结果对象的empty成员 it->mem和(*it).mem表达意思同
	

}