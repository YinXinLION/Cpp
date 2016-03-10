/*************************************************************************
	> File Name: 9.18.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月10日 星期四 20时19分18秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    deque<string> input;
    for(string str; cin >> str; input.push_back(str));
    for(auto iter = input.cbegin();iter != input.cend(); ++iter)
    cout << *iter << endl;
}
