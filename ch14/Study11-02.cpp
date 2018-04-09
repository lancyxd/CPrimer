#include <iostream>  
#include "MyTime.h"  
  
  
int main(int argc, char* argv[])  
{  
using std::cout;  
using std::endl;  
CMyTime weeding(4, 35);  
CMyTime waxing(2, 47);  
CMyTime total;  
CMyTime diff;  
CMyTime adjusted;  
  
  
cout << "weeding Time = ";  
weeding.Show();  
cout << endl;  
  
  
cout << "waxing Time = ";  
waxing.Show();  
cout << endl;  
  
  
cout << "total work Time = ";   //（1）  
total = weeding + waxing;  
total.Show();  
cout << endl;  
  
  
diff = weeding - waxing;  
cout << "weeding Time - waxing Time = "; //（2）  
diff.Show();  
cout << endl;  
  
  
adjusted = total *1.5;                     //（3）  
cout << "adjusted work Time = ";  
adjusted.Show();  
cout << endl;  
  
  
return 0;  
}  



//A = operator *（1.5，B）等价于A = 1.5 * B