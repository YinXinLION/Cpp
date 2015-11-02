/*************************************************************************
	> File Name: obj2.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月03日 星期二 00时13分33秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Base{
    //抽象类
    public:
    virtual void fun() = 0; //纯虚函数
};

class D1:public Base{
    public:
    void fun()
    {
        cout << "D1 fun()" << endl;
    }
};

class D2:public Base{
    public:
    void fun()
    {
        cout << "D2 fun()" << endl;
    }
};

int main(void)
{
  //  Base *pd = new Base(); 错误 
    Base *pd = new D1();
    pd -> fun(); // d1 fun()
    delete pd;
    pd = new D2();
    pd -> fun(); // d2 fun()
    delete pd;
    return 0;
}
