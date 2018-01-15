#include<iostream>
#include<fstream> //读写给定文件
#include<string>
#include<vector>
using namespace std;

//8.2
istream& func(istream &m){
	string buff;
	while(m>>buff){
		cout<<buff<<endl;
	}
	m.clear();
	return m;
}

//8.4
void ReadFileToVec(const string& fileName,vector<string>& vec)
{
	ifstream ifs(fileName);
	cout<<"ifstream:"<<ifs<<endl;
	if(ifs){
		string buf;
		cout<<"getline:"<<getline(ifs,buf)<<endl;
		while(getline(ifs,buf))
			vec.push_back(buf);
	}
}

int main()
{
/*
	cout<<"hi"<<flush;
	istream& m = func(cin);
	cout << m.rdstate() <<endl;
*/
	vector<string> vec;
	ReadFileToVec("./test.txt",vec);
	for(const auto &str:vec)
		cout<<str<<endl;
	return 0;
}