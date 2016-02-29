/*************************************************************************
	> File Name: 38.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月29日 星期一 23时04分59秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//union 本质是一个类 可以内部也有函数，
//union 内部数据是共享的，不同对象之间是独立的，代码是公有的
//union 具备结构体所有的功能
//不能继承
//节约内存的类需要用到共用体
union Myunion
{
    int num;
    double db;
    void go()
    {

    }
};
/*
union MyunionA:public Myunion
{
    int num;
    double db;
    void go()
    {

    }
}
*/
int main(void)
{
    Myunion l1;

    cout << sizeof(l1) << endl;
    l1.num = 20;
    cout << l1.num << endl;
    l1.db = 10.9;
    cout << l1.num << endl;
}
