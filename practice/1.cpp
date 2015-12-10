/*************************************************************************
	> File Name: 1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月10日 星期四 10时51分14秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

template <class T>

T myadd(T a ,T b )
{
    return a + b;
}

T myadd(T a)
{
    return a + 0;
}

int main(void)
{
    int a = 5;
    int b = 6;
    int sum = 0;
    sum = myadd(a , b);
    cout << sum << endl;
    sum = myadd(a);
    cout << sum << endl;

}
