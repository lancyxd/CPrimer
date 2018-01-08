#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{

//3.17
	vector<string> vec;
	for(string word;cin>>word;vec.push_back(word));
	for(auto &str:vec)
		for(auto &c:str)
			c=toupper(c);
	for (string::size_type i = 0; i != vec.size(); ++i)
	{
		if (i != 0 && i % 8 == 0) cout << endl;
		cout << "vec:"<<vec[i] << " ";
	}
	cout << endl;

//3.18
	vector<int> ivec;
	ivec.push_back(42);
	cout<<ivec[0]<<endl;

//3.20
	vector<int> istore;
	for(int num;cin>>num;istore.push_back(num));
	cout<<"len size:"<<istore.size()<<endl;
	int size;
	if(istore.size()%2!=0){
		size=istore.size()/2+1;
	}else{
		size=istore.size()/2;
	}
	for(int j=0;j<size;j++){
		cout<<istore[j]+istore[istore.size()-j-1]<<" ";
	}

return 0;
}



