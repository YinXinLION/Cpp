/*************************************************************************
	> File Name: 11.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月02日 星期三 20时03分46秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    string s("some thing");
    if(s.begin() != s.end()) //确保s非空
    {                          
        auto it = s.begin();//it表示s的第一个字符
        *it = toupper(*it); //将当前字符改成大写形式
    }
    cout << s << endl;
}
