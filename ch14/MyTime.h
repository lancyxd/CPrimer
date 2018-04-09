#pragma once  
#ifndef MYTIME_H_  
#define MYTIME_H_  
class CMyTime  
{  
private:  
int m_hours;  
int m_minutes;  
public:  
CMyTime();  
CMyTime(int h, int m = 0);  
void AddHr(int h);  //小时更改  
void AddMin(int m);//分钟更改  
void Reset(int h = 0, int m = 0);  //重新设置时间  
CMyTime operator+(const CMyTime &t) const;  //重载加法  
CMyTime operator-(const CMyTime &t) const;  //重载减法  
CMyTime operator*(double n) const;                //重载乘法  
void Show() const;  
~CMyTime();  
};  
#endif