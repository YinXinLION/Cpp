/*************************************************************************
	> File Name: 9.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 19时34分22秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for(auto &i : v) //对于ｖ中的每个元素
    i *= i;         //求元素值的平方
    for(auto i : v) //对于v中的每个元素
    cout << i << " ";//输出该元素
    cout << endl;
}
