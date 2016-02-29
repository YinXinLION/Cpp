/*************************************************************************
	> File Name: 35.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月29日 星期一 19时55分32秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Mystruct
{
    int num;
    double db = 10.8;//默认值
    //Mystruct myself;拒绝内部定义自己
};

struct 
{
    int num;
    double db;
}sx, sy;//匿名结构体不允许初始化
    

int maini(void)
{
    Mystruct s1;
    cout << s1.db << endl;
}

int main()
{
    Mystruct s1;//栈上 自动管理
    Mystruct *pnew = new Mystruct;//堆上 手动管理
}

//同类型结构体可以整体赋值
