#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<boost/shared_ptr.hpp>   //采用shared_ptr必须导入的头文件
using namespace std;
int main()
{
	shared_ptr<string> p1;//shared_ptr指向string
	shared_ptr<list<int>> p2; //shared_ptr指向int类型的list
	shared_ptr<int> p3=make_shared<int>(42);//指向一个值为42的int的shared_ptr
	shared_ptr<string> p4=make_shared<string>(10,'9');//指向一个值为'9999999999'的string
	shared_ptr<int> p5=make_shared<int>(0);
	cout<<p3<<endl;
	cout<<*p4<<endl;
	
	vector<string> v1;
	{//新作用域
		vector<string> v2={"a","an","the"};
		v1=v2; //从v2拷贝元素至v1
	}
	
	//new动态分配和初始化对象
	string *ps=new string;
	int *pi=new int;//pi指向未初始化的对象
	
	string *psv=new string(10,'9');
	int *piv=new int(1024);
	vector<int> *pv=new vector<int>{0,1,2,3,4,5,6,7,8,9};
	
	//auto自动推断类型(根据3进行推断)
	auto po1=new auto(3);
	auto po2=new auto{'a','b','c'};
	
	//动态分配const
	const int *pci=new const int(1024);//用光了所有内存，new表达式会失败
	const string *pcs=new const string("hi");
	
	delete pi;// 释放内存
	delete piv;

	typedef int arrT[42];
	int *pa=new arrT;
	delete [] pa;//pa必须指向一个动态分配的数组
	
	//智能指针和动态数组
	unique_ptr<int[]> up(new int[10]);
	up.release(); //自动用delete []销毁其指针
	

	cout << "hello" << endl;
}