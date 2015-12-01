/*************************************************************************
	> File Name: 3.19.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 21时51分09秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> number(10,42);//简单
    vector<int> number1{42,42,42,42,42,42,42,42,42,42};
    vector<int> number2;
    for(int i = 0; i < 10 ; i++)//灵活
    number2.push_back(42);
}
