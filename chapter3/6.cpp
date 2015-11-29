/*************************************************************************
	> File Name: 6.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 19时40分54秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string s("Hello World!!!");
    //转换成大写形式
    for(auto &c : s) //对于s中的每个字符
    c = toupper(c);
    cout << s << endl;
}
