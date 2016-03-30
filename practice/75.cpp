/*************************************************************************
	> File Name: 75.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月30日 星期三 20时30分58秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

template<class T>
class ren
{
    public:
    T s;
    ren(T a):s(a)
    {
        
    }
};

template<template<class> class T1>
class people
{
    public:
    T1<string> www;

    people(T1<string> &t1):www(t1)
    {
        cout << www.s << endl;
    }
};

int main(void)
{
    ren<string>  lion("lion");
    people<ren>  me(lion);
    
}
