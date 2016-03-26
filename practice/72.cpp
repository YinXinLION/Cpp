/*************************************************************************
	> File Name: 72.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月26日 星期六 18时11分29秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    int num;
    cin >> num;
    int i = 0;
    while(num)
    {
        i++;
        num &= num - 1;
    }
    cout << i << endl;
}


