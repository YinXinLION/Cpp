/*************************************************************************
	> File Name: 10_1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月02日 星期三 20时28分11秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    string s("some thing");
    auto t = s.begin();
    for(t ; t != s.end() ;t++)
    {
        *t = toupper(*t);
    }
    cout << s << endl;
}
