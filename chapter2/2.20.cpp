/*************************************************************************
	> File Name: 2.20.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月24日 星期二 20时11分17秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int i = 42; //定义一个i 赋值为42
    int *p1 = &i;//将i的地址赋给p1;
    *p1 = *p1 * *p1; //i = i * i
    cout << *p1 << endl;
    cout << "42 * 42 = " << 42 * 42 << endl;
}
