/*************************************************************************
	> File Name: obj1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月01日 星期日 00时19分54秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
//地址不同
class Base{
    private:
    int x ,y;

    public:
    //

};

class child1:public Base{
    private:
    int z;

    public:
    //
};

class child2:public Base{
    private:
    int w;

    public:
    //
};

int main()
{
    Base *pa = new Base();
    child1 *pb = new child1();
    child2 *pc = new child2();

    cout << "pa = " << pa << endl;
    cout << "pb = " << pb << endl;
    cout << "pc = " << pc << endl;
    
    delete pa;
    delete pb;
    delete pc;
    cout << "sizeof(int) = " << sizeof(int) << endl;
}
