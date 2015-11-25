/*************************************************************************
	> File Name: empty.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 20时29分12秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string line;
    while(getline(cin ,line))
        if(!line.empty())
            cout << line << endl;
}
