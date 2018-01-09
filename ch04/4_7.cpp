#include<iostream>
#include<vector>
using namespace std;
int main()
{
//4.21
	vector<int> v{1,2,3,4,5,6,7,8,9};
	for(auto &i:v)
	{
		if(i%2?1:0){
			cout<<i<<endl;
			i=i*2;
		}
	}
	for(auto j:v)
		cout<<j<<" ";

//4.22
  for (unsigned g; cin >> g; )
    {
        // conditional operators
        auto result = g > 90 ? "high pass" : g < 60 ? "fail" : g < 75 ? "low pass" : "pass";
        cout << result << endl;

        // if statements
        if (g > 90)         cout << "high pass";
        else if (g < 60)    cout << "fail";
        else if (g < 75)    cout << "low pass";
        else                cout << "pass";
        cout << endl;
    }

}