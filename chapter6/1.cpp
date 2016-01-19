/*************************************************************************
	> File Name: 1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月19日 星期二 10时15分53秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

size_t count_calls()
{
    static size_t ctr = 0; //调用结束，值依然有效
    return ++ctr;
}

int main(void)
{
    for(size_t i = 0; i != 10 ; i++)
    {
        cout << count_calls() << endl;
    }
}
