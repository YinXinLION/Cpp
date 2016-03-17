/*************************************************************************
	> File Name: 57.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月17日 星期四 21时45分15秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class A{
    public:
    int a;
    A():a(33)
    {
        cout << "A" << endl;
    }
    ~A()
    {
        cout << "~A" << endl;
    }
};

class B:public A
{
    public:
    int b;
    B():b(66)
    {
        cout << "B" << endl;
    }
    void go()
    {
        cout << b << endl;
    }
    ~B()
    {
        cout << "~B" << endl;
    }
};

int main(void)
{
    
    B *pb = static_cast<B *>(new A);
    /*
    cout << pb->a << endl;
   可以访问a b中元素 */
    
    //A *pa = static_cast<A *>(new B);
    /*
    cout << pa->a << endl;
    pb -> go();
    */
    delete pb; //创建A 释放 A B
    delete pa; //创建A B 释放 B
}
