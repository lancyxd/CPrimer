#include<iostream>
#include<string>
using namespace std;

//6.25   ./a.out hello  world
/*
int main(int argc,char **argv)
{
	string s;
	string n1=argv[1];
	string n2=argv[2];
	s=n1+n2;
	cout<<s<<endl;
	return 0;
}
*/


//6.26  ./a.out hello  world
int main(int argc, char **argv)
{
    std::string str;
    for (int i = 1; i != argc; ++i)
        str += std::string(argv[i]) + " ";
    std::cout << str << std::endl;
    return 0;
}



/*
int main(int argc,char *argv[]){} //argc表示数组中argv[]字符串数量
int main(int argc,char **argv){}

prog -d -o ofile data0 
argv[0]="prog" 可执行程序的名字
argv[4]="data0"
argv[5]=0
*/