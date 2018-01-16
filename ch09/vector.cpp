#include<iostream>
#include<vector>
#include<string>
#include<array>
using namespace std;
int main()
{
	array<int,42>::size_type i;
	array<string,10>::size_type j;
	array<int,10> ia1;
	array<int,10> ia2={0,1,2,3,4,5,6,7,8,9};
	array<int,10> ia3={10};
	
/*	//9.11
	vector<int> vec;    // 0
	vector<int> vec(10);    // 0
	vector<int> vec(10, 1);  // 1
	vector<int> vec{ 1, 2, 3, 4, 5 }; // 1, 2, 3, 4, 5
	vector<int> vec(other_vec); // same as other_vec
	vector<int> vec(other_vec.begin(), other_vec.end()); // same as other_vec
*/
	//字符串操作
	string name("AnnaBelle");
	auto post1=name.find("Bell");
	cout<<post1<<endl;
	
	string numbers("0123456789");
	string testname("r2d2");
	auto pos=testname.find_first_of(numbers);
	cout<<"pos:"<<pos<<endl;
	
	//数值转换
	int ivalue=42;
	string s =to_string(ivalue);
	double dvalue=stod(s);//s转换为double
	cout<<s<<endl;
	cout<<dvalue<<endl;
	
	//容器适配器
	
}