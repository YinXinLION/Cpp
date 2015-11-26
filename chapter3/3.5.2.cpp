/*************************************************************************
	> File Name: 3.5.2.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月26日 星期四 18时53分36秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string line ,link;
    for(int i = 1; i < 6;i++)
    {
        cin >> line;
        if(line.empty())
        link += (line + "");
        else
        link +=(line + " ");
    }
    cout << link << endl;
}
