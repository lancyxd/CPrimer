#include<iostream>
#include<string>
#include<cstring>

using namespace std;

bool compare(int* const b1,int* const b2,int* const e1,int* const e2);
void comparestring(string a,string b);
void compareCstring(const char* cs1,const char* cs2);

int main()
{
	string nums[]={"one","two","three"};
	string *p=&nums[0];//p指向nums第一个元素

	int ia[]={0,1,2,3,4,5,6,7,8,9};
	auto ia2(ia);//ia2为整型指针，指向ia的第一个元素
	auto ia3(&ia[0]);  //ia3的类型为int*
	
	//C++11
	int ia1[]={0,1,2,3,4,5,6,7,8,9};
	int *beg=begin(ia1); //指向ia首元素的指针
	int *last=end(ia1); //指向arr尾元素下一位置的指针


	//3.35
	const int size=10;
	int arr[size];
	for(auto ptr=arr;ptr!=arr+size;++ptr)
		*ptr=0;
	for(auto i:arr)
		cout<<i<<" ";
	cout<<endl;

	//3.36
	int arr1[3] = { 0, 1, 2 };
    int arr2[3] = { 0, 2, 4 };

    if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
        cout << "The two arrays are equal." << endl;
    else
        cout << "The two arrays are not equal." << endl;

    cout << "==========" << endl;

	//string
	char ca[]={'C','+','+'};
	cout<<strlen(ca)<<endl;;//error，ca必须以空字符结束
	
	//指针相加在c++中是禁止的，可以指针相减
	//3.39
	string a("hello");
	string b("hhllo");
	comparestring(a,b);

	const char* cs1="happy";
	const char* cs2="hoppy";
	compareCstring(cs1,cs2);
return 0;
}


//3.36
bool compare(int* const b1,int* const b2,int* const e1,int* const e2)
{
	if((e1-b1)!=(e2-b2)){
		return false;
	}
	else
	{
	for(int* i=b1,*j=b2;(i!=e1&&j!=e2);++i,++j){
		if(*i!=*j)
			return false;
	}
	}
	return true;
}


//3.39
void comparestring(string a,string b)
{
	if(a==b)
		cout<<"equal"<<endl;
	if(a>b)
		cout<<a<<" is bigger than "<<b<<endl;
	if(a<b)
		cout<<a<<" is smaller than "<<b<<endl;
}

void compareCstring(const char* cs1,const char* cs2)
{
	auto result =strcmp(cs1,cs2);
	if(result==0)
		cout<<"equal"<<endl;
	else if(result>0)
		cout<<cs1<<" bigger than "<<cs2<<endl;
	else
		cout<<cs1<<" smaller than "<<cs2<<endl;
}
/*
数组维度必须为一常量;
char st[11] = "fundamental";  // illegal, the string's size is 12.
*/



