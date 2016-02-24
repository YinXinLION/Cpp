/*************************************************************************
	> File Name: 16.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月24日 星期三 19时08分38秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//reinterpret_cast 专业转换指针 最安全
int main(void)
{
    int num = 3;
    char *p = reinterpret_cast<char *>(&num);
}
