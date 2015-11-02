/*************************************************************************
	> File Name: obj1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月03日 星期二 00时04分47秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Base{
    public:
    virtual void find()
    {
        cout << "Base fun()" << endl;
    }
};

class D1:public Base{
    public:
    void find()
    {
        cout << "D1 fun()" << endl;
    }
};

class D2:public Base{
    public:
    void find()
    {
        cout << "D2 fun()" << endl;
    }
};

int main(void)
{
    Base *pb;

    pb = new D1();
    pb -> find();
    delete pb;

    pb = new Base();
    pb -> find();
    delete pb;

}
