/*************************************************************************
	> File Name: 65.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月24日 星期四 22时00分54秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
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

template<class T>
class newclass:public myclass<T>
{
    public:
    T y;
    newclass(T t1, T t2):myclass(t1), y(t2)
    {

    }
    void print()
    {
        cout << x << "   " << y << endl;
    }
};

int main(void)
{
    newclass<double> my1(10.9, 2.3);
    my1.print();
}
