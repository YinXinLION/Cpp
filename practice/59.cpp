/*************************************************************************
	> File Name: 59.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月18日 星期五 20时49分46秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Base
{
    public:
    virtual void work()
    {
        cout << "厨师" << endl;
    }
};

class master1:public Base
{
    public:
    void work()
    {
        cout << "川菜厨师" << endl;
    }
};

class master2:public Base
{
    public:
    void work()
    {
        cout << "粤菜厨师" << endl;
    }
};

class master3:public Base
{
    public:
    void work()
    {
        cout << "江苏菜厨师" << endl;
    }
};

int main(void)
{
    Base * base;
    master1 m1;
    master2 m2;
    master3 m3;
    base = &m1;
    base->work();
    base = &m2;
    base->work();
    base = &m3;
    base->work();

}
