/*************************************************************************
	> File Name: 3.2.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 21时46分00秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{ 
    string line;
    for ( ; cin >> line; cout << line << endl ) ;//一次读入一个词
    for ( ; getline(cin ,line) ;cot << line << endl ) ;//一次一行
}
