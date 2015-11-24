/*************************************************************************
	> File Name: 2.30.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月24日 星期二 20时57分27秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int i = 42;
    const int v2 = 0; //v2值无法改变
    int v1 = v2;//v1值能改变
    int *p1 = &v1 ,&r1 = v1;//p1的值 p1指向的值都能改变
    const int *p2 = &v2 ,*const p3 = &i ,&r2 = v2;//p2的值可以改变,p2指向的值无法改变,p3值和指向的值都不能改变
}
