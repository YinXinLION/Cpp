/*************************************************************************
	> File Name: 46.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月07日 星期一 20时26分56秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class myclass
{
    public:
    int num;
    int data;
    int *p;
    const int coint;
    int &myint;
    static int shu;//声明
   //引用 常量 必须在构造的时候初始化 
    public:
    static void go()
    {
        
    }

    myclass(int data1, int data2):coint(data1),myint(data2)
    {
        const int *p = &coint;
        int *q = const_cast<int *>(p);
        *q = 100;

        cout << coint << endl;
    }
    //类的外部，一开始必须初始化，用常量强行替换，不读内存
    //类的内部，必须构建一个类才能初始化化，const与C语言是一样的，读内存

    void run()
    {
        
    }

    ~myclass()
    {

    }

};

//vs2013中cout <<< my1.myint << endl;会打印出地址， 
int myclass::shu = 0;//初始化

//类中的普通成员变量
//类名 变量名 栈上
//new 堆上
// 静态成员 静态去
// 成员函数，静态函数 代码区

int main(void)
{
    myclass my1(2, 4);
    cout << my1.coint << my1.myint << endl;
    int data = 30;
    my1.myint = data;//引用竟然可以改变了
    cout << my1.myint << endl;
    void (myclass::*p)() = &myclass::run;//代码共享,所有的类对象共享对象
    void (*q)() = &myclass::go;//静态函数，与对象没关系
}
