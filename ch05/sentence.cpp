#include<iostream>
#include<vector>
using namespace std;
int main()
{
	;//空语句
	//if语句
	const vector<string> scores={"F","D","C","B","A"};
	int grade=98;
	string lettergrade;
	if(grade<60){
		lettergrade=scores[0];
	}else{
		lettergrade=scores[(grade-50)/10];
		if(grade%10>7)
		{
			lettergrade+="+";
		}else{
			lettergrade+="-";
		}
	}
	cout<<lettergrade<<endl;
	
	//switch case语句，元音字母计数。注意不要漏写break。 没有任何case匹配上执行default
	unsigned aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0,otherCnt=0;
	char ch;
	while(cin>>ch){
		switch(ch){
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		default:
			++otherCnt;
			break;
		}
	}
	cout<<"aCnt:"<<aCnt<<endl;
	cout<<"otherCnt:"<<otherCnt<<end;
	
	//不清楚循环多少次，采用while
	//c++11 for语句
	//goto语句
	

return 0;
}