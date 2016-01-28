/*************************************************************************
	> File Name: 7.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月28日 星期四 17时15分10秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
class demo
{
    private:
    int i;
    public:
    demo()
    {
        cout << "demo" << endl;     
    }
    demo(const demo &it)
    {
        cout << "copy demo" << endl;  
    }
    ~demo()//析构
    {
        cout << "~demo" << endl;     
    }
    void set_i(int i)
    {
        this->i = i;          
    }

    int get_i()
    {
        return i;         
    }

    friend void test();//意思是声明一个该类的友元函数
    //此时test可以自由访问demo当中的任意成员
    friend class demo1;//声明一个该类的友元类
};

class demo1 //友元类
{
    public:
    demo1()
    {
        demo d;
        d.i = 199;
    }
};

void test()
{
    demo d;
    d.i = 100;
}

int main(void)
{
    test();
    cout << "Hello, world!" << endl;
}
