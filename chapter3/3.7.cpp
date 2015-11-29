/*************************************************************************
	> File Name: 3.7.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 20时36分19秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string str("a simple string");
    for(char c : str) c = 'X';
    cout << str << endl;

    //in this case,c = 'X' won't mutate str
    //c 只是str中每个字符的副本

}
