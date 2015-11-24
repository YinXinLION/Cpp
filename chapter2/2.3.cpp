/*************************************************************************
	> File Name: 2.3.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月24日 星期二 19时59分05秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    unsigned u = 10,u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10 ,i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;

}
