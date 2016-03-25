/*************************************************************************
	> File Name: 67.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月25日 星期五 21时08分51秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//类模板可以直接继承类模板 但必须指明是那个类 子类并不晓得父类
//普通类继承类模板，需要明确模板类型
//类模板继承普通类，常规操作
//
class xyz
{
    public:
    int x;
    int y;
    int z;
    xyz(int a, int b, int c) :x(a), y(b), z(c)
    {
    }
    void print()
    {
        cout << x << y << z << endl;
    }
};

template<class T>
class newxyz:public xyz
{
    public:
    T a;
    newxyz(T t1,int a, int b, int c) :xyz(a, b, c),a(t1)
    {

    }
    void print()
    {
        cout << "Ta=" << a << endl;
        cout << x << y << z << endl;
    }
};

class classrun:public newxyz<int> 
{
    public:
    int d = 0;
    classrun(int a,int b, int c, int d):newxyz<int>(a,b,c,d)
    {
    }
    void print()
    {
        cout << d << x << y << z << a << endl;
    }
};

int main(void)
{
    
    classrun my1(1,2,3,4);
    my1.print();
}
