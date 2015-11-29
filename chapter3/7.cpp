/*************************************************************************
	> File Name: 7.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 19时50分02秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string str("Hello world!!!");
    //依次处理s中的字符直至我们处理完全部字符或者遇到一个空白
    for(int i = 0; i < str.size() && !isspace(str[i]); i++)
    str[i] = toupper(str[i]);
}
