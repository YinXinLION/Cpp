/*************************************************************************
	> File Name: 56.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月17日 星期四 21时14分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//父类与子类之间的重载，同名函数会覆盖
//即使参数类型不一样，不能直接调用，必须调用父类默认生成的对象来调用


class A{
    public:
    void go()
    {
        cout << "A ---- go"<< endl;
    }
    void go(int num)
    {
        cout << "A ---- go" << num << endl;
    }
    void go(char *str)
    {
        cout << "A ---- go" << str << "str" << endl;
    }
    void goA(char *str)
    {
        cout << "A ---- go" << str << "str" << endl;
    }
};

class B:public A
{
    public:
    //const 函数重载一般适用于常量对象
    //非const一般适用于变量对象
    void go()
    {
        cout << "B ---- go" << endl;
    }
    void go() const 
    {
        cout << "B ---- const go" << endl;
    }
};

int main(void)
{
    B *p = new B;
    p -> go();
    const B *pb = new B;
    pb -> go();
    p -> A::go(1);
}
