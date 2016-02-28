/*************************************************************************
	> File Name: 32.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 20时43分57秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;
//智能指针

int main(void)
{
    //auto_ptr; 智能指针
    for(int i = 0; i < 1000000; i++)
    {
        double *p = new double;//为指针分配内存
        auto_ptr<double> autop(p);
        //创建智能指针管理指针p指向内存
        //auto_ptr 添加#include<memory>
        //delete p;
    }

    for(int i = 0;i < 1000000; i++)
    {
        //新型指针
        unique_ptr<double> ptr(new double); //C++11的智能指针：
    }
}
