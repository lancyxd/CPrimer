#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	//5.24
	int i,j;
	cin>>i>>j;
	if(j==0)
		throw runtime_error("divisor is 0");
	cout<<i/j<<endl;
	
	//5.25
	for(int i,j;cout<<"input two integer:",cin>>i>>j;)
	{
		try{
			if(j==0)
				throw runtime_error("divisor is 0");
			cout<<i/j<<endl;
		}
		catch(runtime_error err){
			 cout << err.what() << "\nTry again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
		}
	}
}