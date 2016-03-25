/*************************************************************************
	> File Name: 65.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月24日 星期四 22时00分54秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>

//模板类子类在实例化之前是不知道父类是谁，要显示指定
using namespace std;

template<class T>
class myclass
{
    public:
    T x;
    myclass(T t):x(t)
    {

    }
    void print()
    {
        cout << x << endl;
    }
};

template<class T1>
class newclass:public myclass<T1>
{
    public:
    T1 y;
    newclass(T1 t1, T1 t2):myclass<T1>::myclass(t1), y(t2)
    {

    }
    void print()
    {
        cout <<   <<"   " << >y << endl;
    }
};

int main(void)
{
    newclass<double> my1(10.9, 2.9);
    my1.print();
}
