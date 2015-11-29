/*************************************************************************
	> File Name: 3.6.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 20时28分41秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string str("yinxin");
    for(auto &s : str)
    s = 'X';
    cout << str << endl;
    
}
