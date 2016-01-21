/*************************************************************************
	> File Name: 3.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月21日 星期四 12时33分45秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

int main(void)
{
    string str1("Yin Xin");
    string str2("Xin");

    cout << shorterString(str1, str2) << endl;
}
