/*************************************************************************
	> File Name: 29.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 16时34分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//去掉转义字符   R"( 内容 )"
int main(void)
{
    string str = R"(213\P\s\qwqrqvds)";
    
    cout << str.c_str() << endl;
}
