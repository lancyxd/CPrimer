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
优先使用前置版本++i:迭代器和其他模板对象应该使用前缀形式 (++i) 的自增,，自减运算符，因为前置自增 (++i) 通常要比后置自增 (i++) 效率更高。
ptr->mem等价于(*ptr).mem;
