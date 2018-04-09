#include "MyTime.h"  
#include <iostream>  
  
CMyTime::CMyTime()  
{  
m_hours = 0;  
m_minutes = 0;  
}  
  
  
CMyTime::CMyTime(int h, int m)  
{  
m_hours = h;  
m_minutes = m;  
}  
  
  
CMyTime::~CMyTime()  
{  
}  
  
  
void CMyTime::AddHr(int h)                                             //小时更改  
{  
m_hours += h;  
}  
  
  
void CMyTime::AddMin(int m)                                             //分钟更改  
{  
m_minutes = m;  
}  
  
  
void CMyTime::Reset(int h, int m)                                           //重新设置时间  
{  
m_hours = h;  
m_minutes = m;  
}  
  
  
CMyTime CMyTime::operator+(const CMyTime &t) const              //重载加法运算符函数  
{  
CMyTime sum;  
sum.m_minutes = t.m_minutes + m_minutes;  
sum.m_hours = t.m_hours + m_hours + sum.m_minutes / 60;  
sum.m_minutes %= 60;  
return sum;  
}  
  
  
CMyTime CMyTime::operator-(const CMyTime &t) const         //重载为减法运算符函数  
{  
CMyTime diff;  
int tot1, tot2;  
tot1 = t.m_minutes + 60 * t.m_hours;  
tot2 = m_minutes + 60 * t.m_hours;  
diff.m_minutes = (tot2 - tot1) % 60;  
diff.m_hours = (tot2 - tot1) / 60;  
return diff;  
}  
  
  
CMyTime CMyTime::operator*(double n) const                 //重载为乘法运算符函数。  
{  
CMyTime result;  
long totalMinutes = m_hours * 60 * n+ m_minutes *n;  
result.m_minutes = totalMinutes % 60;  
result.m_hours = totalMinutes / 60;  
return result;  
}  
  
  
void CMyTime::Show() const  
{  
std::cout << m_hours << " hours "  
<< m_minutes << " minutes\n";  
}  