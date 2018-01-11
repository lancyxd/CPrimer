#include<iostream>
#include<vector>
using namespace std;

//6.11
void reset(int &i)
{
	i=0;
}

//6.12    无返回值
void swap(int &src,int &dst)
{
	int tmp=src;
	src=dst;
	dst=tmp;
}

//6.18   bool compare(matrix m1,matrix m2);
vector<int>::iterator change_val(int,vector<int>);

//6.21
int larger(int n,int *m)
{
	return (n>*m)?n:*m;
}

//6.22
void swap1(int *n1,int *n2)
{
	int tmp;
	tmp=*n1;
	*n1=*n2;
	*n2=tmp;
}

//6.24   传递执行长度为10的数组，需用如下方式。 void print10(const int (&ia)[10]) { /*...*/ }

int main()
{
	int i=42;
	reset(i);
	cout<<i<<endl;  //out 0

	for(int left,right;cout<<"input two num:\n",cin>>left>>right;) //e1是初始化区，只执行一次;e2是循环条件判断区，如果为假，结束循环，如果为真，则执行for_statements ;e3是循环变量改变区，执行完for_statements ,就会执行e3，然后再转到e2进行判断，是否继续
	{
		//swap(left,right);
		swap1(&left,&right);
		cout<<"swap after:"<<left<<" "<<right<<endl;
		cout<<"max:"<<larger(left,&right)<<endl;
	}
	
return 0;
}
