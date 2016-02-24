/*************************************************************************
	> File Name: 13.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月24日 星期三 14时15分53秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//函数模板与普通函数的选择问题

template<class T>
T add(T a, T b)
{
    cout << "template add" << endl;
    return a + b;
}

int add(int a, int b)
{
    cout << "add" << endl;
    return a + b;   
}


int main(void)
{
    int a = 10, b = 20;
    double c = 1.1, d = 2.2;
    add(a, b);
    add(c, d);
    add<int>(a, b); // 调用尖括号
}
