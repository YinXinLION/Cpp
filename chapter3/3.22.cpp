/*************************************************************************
	> File Name: 3.22.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月02日 星期三 21时49分58秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<string> test{"yinxin leaarn c++"};
    for(auto t = test.begin(); t != test.end(); t++)
    for(auto &c : (*t)) 
    (c) = toupper(c);

    cout << test[0] << endl;
}
