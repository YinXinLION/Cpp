/*************************************************************************
	> File Name: 58.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月17日 星期四 23时48分27秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class A
{
    virtual void go() 
    {

    }
    int x;
};

int main(void)
{
    cout << "int字节 = " << sizeof(int) << endl; 
    cout << "类字节数 = " << sizeof(A) << endl;
}
