#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map> 
using namespace std;

//关联容器set、map
int main()
{
	map<string,size_t> word_count;//key-value
	string word;
/*	while(cin>>word)
		++word_count[word];
	for(const auto &w:word_count)
		cout<<w.first<<" occues "<<w.second<<((w.second>1)?" times ":" time ")<<endl;
*/
	set<string> exclude={"the","a","an","but"};
	while(cin>>word)
		if(exclude.find(word)==exclude.end())
			++word_count[word];
	for(const auto &w:word_count)
		cout<<w.first<<" occues "<<w.second<<((w.second>1)?" times ":" time ")<<endl;
	
	//11.12
	vector<pair<string,int>> vec;
	string str;
	int i;
	while(cin>>str>>i)
		vec.push_back(pair<string,int>(str,i));
	for(const auto &p:vec)
		cout<<p.first<<":"<<p.second<<endl;

}