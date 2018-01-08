#include<iostream>
#include<vector>
using namespace std;

int main(){
//3.14
	vector<int> v;
	int m;
	while(cin>>m){
		v.push_back(m);
	}

//3.15
	vector<string> vs;
	for (string buffer;cin >> buffer; vs.push_back(buffer));

return 0;
}