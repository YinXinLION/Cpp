/*************************************************************************
	> File Name: 3.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 20时14分29秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string line;
    //每次读入一整行,直至到达文件末尾
    while(getline(cin ,line))
        cout << line << endl;
    return 0;
}
