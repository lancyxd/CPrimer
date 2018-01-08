#include<iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;
//3.21
void check_and_print(const vector<int>& vec)
{
	cout<<"size: "<<vec.size()<<"content: [";
	for(auto it=vec.begin();it!=vec.end();++it)
		cout<<*it<<(it != vec.end() - 1 ? "," : "");
	cout<<"]\n"<<endl;
}

void check_and_print(const vector<string> &vec)
{
	cout << "size: " << vec.size() << "  content: [";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << (it != vec.end() - 1 ? "," : "");
	cout << "]\n" << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    check_and_print(v1);
    check_and_print(v2);
    check_and_print(v3);
    check_and_print(v4);
    check_and_print(v5);
    check_and_print(v6);
    check_and_print(v7);

//3.23
	vector<int> v{0,1,2,3,4,5,6,7,8,9};
	for(auto it=v.begin();it!=v.end();++it)
		*it*=2;
	for(auto i:v)
		cout<<i<<" ";
return 0;

}

