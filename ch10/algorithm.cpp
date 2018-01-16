#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
using namespace std;

template<typename Sequence>
auto println(Sequence const& seq) ->ostream&
{
	for(auto const& elem:seq)
		cout<<elem<<" ";
	return cout<<endl;
}

auto eliminate_duplicates(vector<string> &vs) ->vector<string>&
{
    sort(vs.begin(), vs.end());
    println(vs);

    auto new_end = unique(vs.begin(), vs.end());
    println(vs);

    vs.erase(new_end, vs.end());
    return vs;
}


int main()
{
	vector<int> vec;
	auto it=back_inserter(vec);
	*it=42;
	cout<<vec[0]<<endl;
	
	
	vector<string> vs{ "a", "v", "a", "s", "v", "a", "a" };
    println(vs);
    println(eliminate_duplicates(vs));

	//lambda函数，用于创建匿名函数
	auto add=[](int lhs,int rhs){return lhs+rhs;};
	
	int i=42;
	auto addS=[i](int num){return i+num;};
	
	auto biggers=[](int cmp1,int cmp2){return cmp1>cmp2;};
	
	vector<int> vecI={0,1,2,3,4,5,6,7,8,9};
	for(auto r_iter=vecI.crbegin();r_iter!=vecI.crend();++r_iter)//crbegin()绑定到尾元素
		cout<<*r_iter<<" ";
	cout<<endl;
	sort(vecI.begin(),vecI.end()); //正常排序
	sort(vecI.rbegin(),vecI.rend());//逆序
	
	// 10.35
    for (auto it = prev(vecI.cend()); true; --it) {
        cout << *it << " ";
        if (it == vecI.cbegin()) break;
    }
    cout <<endl;
	
	// 10.36
    list<int> lst = { 1, 2, 3, 4, 0, 5, 6 };
    auto found_0 = find(lst.crbegin(), lst.crend(), 0);
   cout<<distance(found_0, lst.crend())<<endl;
   
   //10.37
   vector<int> numI={1,3,5,7,9,2,4,6,8,10};
   list<int> ret_lst(5);
   copy(numI.cbegin() + 3, numI.cbegin() + 8, ret_lst.rbegin());
    for (auto iList : ret_lst) 
		cout << iList << " ";
    return 0;

}





//消除重复单词
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	auto end_unique=unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}