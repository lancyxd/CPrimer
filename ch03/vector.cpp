/*
vector类模板
vector<T> v1; v1为空的vector，潜在元素类型为T
*/
#include <iostream>
#include<vector>
using namespace std;
using std::vector;
//using std::cin;
int main()
{
	vector<string> v1{"a","an","the"}; //列表初始化
	vector<int> ivec(10,-1);
	vector<string> svec(10,"hi");

	vector<int> ivec1(10);//每个元素都初始化为0
	vector<string>svec1(10);//每个都是空的string对象

	vector<int> v{10,1};//v有两个元素，值分别为10和1
	vector<vector<int>> ivec2; //c++11 vector
	vector<string> v7{10,"hi"}; //v有10个元素，全为hi
	
//vertor对象添加元素
	vector<int> vadd; //vadd是空的vectotr,不能采用下标的方式访问，必须采用push_back方式添加元素
	for(int i=0;i!=10;i++)
		vadd.push_back(i); //尾端添加元素
	
	cout<<vadd.empty()<<endl; //无元素返回1，有元素返回0;
	cout<<vadd.size()<<endl;
	cout<<vadd[5]<<endl;
	vadd={9,8,7,6,5,4}; //用列表元素拷贝替换v1元素
	cout<<"after vadd[0]:"<<vadd[0]<<endl;
	cout<<"after vadd size:"<<vadd.size()<<endl;

//vector对象的访问
	for(auto &i:vadd)
		cout<<i<<" ";
	cout<<endl;

//分数统计
	vector<unsigned> score(11,0);
	unsigned grade;
	while(cin>>grade){
		if(grade<=100)
			++score[grade/10];
	}
}


