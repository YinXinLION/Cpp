/*************************************************************************
	> File Name: 9.19.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月10日 星期四 21时17分48秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    list<string> input;
    for(string str; cin >> str; input(str))
    {
        for(auto iter = input.cbegin(); iter != input.cend(); ++iter)
        cout << *iter << endl;
    }
}
