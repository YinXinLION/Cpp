/*************************************************************************
	> File Name: 3.18.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 21时39分23秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> ivec;
   // ivec[0] = 42; 错误
    可以 vector<int> ivec = {42};
    ivec[0] = 42;
    ivec.push_back(42);
    暂时想到的就这么多..
    return 0
}
