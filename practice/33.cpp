/*************************************************************************
	> File Name: 33.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 21时42分23秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<assert.h>
using namespace std;


int main1(void)
{
    //静态断言
    int num = 10;
    //字节>4
    static_assert(sizeof(num) >= 4, "error");
    //调试代码，迅速知道代码错误在哪一行
}

int main(void)
{
    //宏指令
    int num = 100;
    cout << num << endl;
    cout << __FILE__ << endl;
    cout << __LINE__ << endl;
    cout << __DATE__ << endl;
    cout << __TIME__ << endl;
    cout << __FUNCTION__ << endl;
}
