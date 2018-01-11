#include<iostream>
#include<vector>
//#include<string>
//using std::vector;
using namespace std;
using Iter = vector<int>::const_iterator;


void print(Iter first,Iter last)
{
	if(first!=last)
	{
		cout<<*first<<" ";
		print(++first,last);
	}
}

int main()
{
	vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	print(vec.cbegin(),vec.cend());
	
	//typedef用法
	typedef string::size_type sz;
	
	return 0;
}



