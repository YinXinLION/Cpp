/*************************************************************************
	> File Name: size.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 20时31分48秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string line;
    //每次读入一整行,输出其中超过6个字符的行
    while(getline(cin ,line))
    if(line.size() > 6)
    {
        cout << line << endl;
        cout << "长度为: " << line.size() << endl;
    }
}
