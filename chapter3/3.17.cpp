/*************************************************************************
	> File Name: 3.17.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 21时24分02秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    int i;
    string word;
    vector<string> str;
    for(decltype(str.size())i = 0; i < 3 ; i++)
    {
        cin >> word;
        str.push_back(word);
    }
    for(auto &i : str)
    for(auto &c : i)
    c = toupper(c);
    for(auto i : str)
    cout << i << endl;
}
