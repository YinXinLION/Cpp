/*************************************************************************
	> File Name: 28.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 15时53分15秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<functional>//处理函数
using namespace std;
using namespace std::placeholders;
//创建指针引用结构体内部函数
//仿函数，创建一个函数指针，引用一个结构体内部或者一个类内部的公有函数
struct Mystruct
{
    void add(int a)
    {
        cout << a << endl;
    }
    void add1(int a, int b)
    {
        cout << a << "  " << b << endl;
    }
    void add2(int a, int b, int c)
    {
        cout << a << " " << b << " " << c << endl;
    }
};

void add3(int a)
{
    cout << a << endl;
}

int main(void)
{
    Mystruct struct1;//auto自动变量，地址，1.函数指针，2.数据指针
    void(Mystruct::*p)(int a) = &Mystruct::add;
    //创建函数指针，类结构体，数据私有，代码共享
    //函数通过调用，调用需要传递对象名进行区分
    auto func = bind(&Mystruct::add, &struct1, _1);
    void (*q)(int a) = add3;
    //bind
    //第一个参数引用内部函数，
    //第二个参数绑定一个实体对象，
    //第三个等，代表参数
    func(666);
    auto func1 = bind(&Mystruct::add1, &struct1, _1,_2);
    func1(666 ,999);
    auto func2 = bind(&Mystruct::add2, &struct1, _1, _2, _3);
    func2(10, 20, 30);
    

}


























