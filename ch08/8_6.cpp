#include<iostream>
#include<fstream>
#include "./Sale_item.h"
using namespace std;

/*
g++ -c  8_6.cpp Sale_item.h -std=c++11,生成8_6.o文件
g++ 8_6.cpp -o main -I ./8_6.o -std=c++11
*/

int main(int argc,char **argv)
{
    ifstream input(argv[1]);
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
    
    return 0;
}