/*************************************************************************
	> File Name: 4.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 19时28分41秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string str("some thing");
    //每行输出str中的一个字符
    for(auto c : str) //对于str中的每个字符
    cout << c << endl;
}
