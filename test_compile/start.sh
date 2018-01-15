usr并不是user用户的缩写，而是unix system resource 的缩写
tree -L 2 //显示两级目录
include头文件有两种方式，一个是#include “头文件”，一个是#include <头文件>。区别在于：
前者是从当前的目录来搜索。后者是一般会先搜索 -I 选项后的路径（即用gcc编译时的-I选项），之后就是标准的系统头文件路径。

//linux下使用gcc/g++编译多个.h .c 文件方法：
g++ main.cpp -o main  					//-o 指定输出可执行程序的名字
g++ main.cpp -o main -I ../myinclude/	//-I 执行头文件进行编译
g++ -c myhead.cpp -o myhead.o			//生成.o文件
g++ main.cpp -o main -I ../myinclude/  ../myinclude/myhead.o


类通常定义在头文件中，并且类名和头文件名一致。头文件不应该包含using声明。
变量和函数尽量在头文件中声明，在原文件中定义。内联函数尽量放到头文件中。
//分离式编译(允许我们把程序分割到几个文件中去，每个文件独立编译)


using std::cin;
using namespace::name;

using namespace std;


g++编译多个文件采用makefile：
g++ -c APCluster.cppAPCluster.h //生成APCluster.o 中间文件
g++ -c example.cppAPCluster.h  //生成example.o中间文件
g++ -o main APCluster.o example.o


g++ test_111.cpp -std=c++11 //编译c++ 11新特性



//不同系统输入文件结束的标志
windows平台，即dos命令行，输入文件结束标志的方法为CTRL+Z
Unix, Linux,Mac等，输入文件结束标志方法为CTRL+D

//不同系统换行符的标志()
DOS/Windows系统采用CRLF(即回车+换行)表示下一行
Linux/UNIX系统采用LF表示下一行
MAC系统采用CR表示下一行


short是16位有符号整数,范围-32768~+32767(-2^15~2^15-1)，共有65535个数，2^16-1
%取余运算或取模运算;

优先使用前置版本++i:
迭代器和其他模板对象应该使用前缀形式 (++i) 的自增,，自减运算符，因为前置自增 (++i) 通常要比后置自增 (i++) 效率更高。理由是：后置++会生成临时对象。前置版本将对象本身作为左值返回，后置版本则将原始对象的副本作为右值返回，两种运算符必须作用于左值运算对象。后置版本需要拷贝副本，所以会影响程序的性能
前置++的返回类型是左值引用，后置++的返回类型const右值。而左值和右值，决定了前置++和后置++的用法。

ptr->mem等价于(*ptr).mem;


顶层const和底层const区别:
对于一般的变量来说，其实没有顶层const和底层const的区别，而只有向指针这类复合类型的基本变量，才有这样的区别。
int num_a = 1;  
int const  *p_a = &num_a; //底层const		//声明指向常量的指针也就是底层const
int num_b = 2;  
int *const p_b = &num_b; //顶层const,常量指针(指针本身是常量)，声明时必须初始化，之后其存储的地址就不可改变

const int a = 1;  //a是顶层const  
//int * pi = &a;  //错误，&a是底层const，不能赋值给非底层const   
const int * pi = &a; //正确，&a是底层const，可以赋值给底层const  
const int *const *const ppi = &pi  //即是底层const，也是顶层const  
const int  *const *const *pppi = &ppi; //底层const  


函数重载:函数名相同形参不同~

内联函数：  让一个函数成为内联函数，隐式的为在类里定义函数，显式的则是在函数前加上inline关键字说明。
原理:代码替代。是用空间换取时间的做法，是以代码膨胀（复制）为代价，仅仅省去了函数调用的开销，从而提高函数的执行效率。

宏定义:#define MAX(a,b) (a>b)?a:b

assert预处理宏

构造函数：类通过一个或几个特殊的成员函数来控制其初始化的过程，这些函数叫构造函数。特点：以类名作为函数名，无返回类型。可以重载
默认构造函数:
析构函数:
成员后函数:

继承是子类获得父类的成员。
重写（覆盖）override:继承后重新实现父类的方法。一般用于子类在继承父类时，重写（覆盖）父类中的方法。
重载:一般是在一个类实现若干重载的方法，这些方法的名称相同而参数形式不同。但是不能靠返回类型来判断。
多态:是父类使用子类的方法。一般我们使用多态是为了避免在父类里大量重载引起代码臃肿且难于维护。


类:关键词struct和class定义类的区别是默认访问权限不太一样。
struct的默认类型是public
class的默认类型是private
public是公有的我们可以在随便访问
private是私有的。。我们只能通过友元friend或者类中的成员函数访问

static静态成员:静态数据成员属于整个类，即使没有任何对象创建，类的静态数据成员变量也存在。外部访问类的静态成员只能通过类名来访问，例如：test::getCount()。
普通成员:属于类的一个具体的对象，只有对象被创建了，普通数据成员才会被分配内存。

类的两项基本能力:数据抽象(定义数据成员和函数成员的能力)和封装(保护类的成员不被随意访问的能力，设为private)




