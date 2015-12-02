/*************************************************************************
	> File Name: 3.21.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月02日 星期三 21时42分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<string> vec{"Hello" , "world" ,"Hi"};
    for(auto t = vec.begin(); t != vec.end() ; t++)
    cout << *t << endl;
}
