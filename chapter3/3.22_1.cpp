/*************************************************************************
	> File Name: 3.22_1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月02日 星期三 22时11分14秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<string> text = {"hello yinxin"};

    for(auto &word : text)
    {
        for(auto &ch : word)
        if(isalpha(ch)) ch = toupper(ch);
        cout << word << " "<<endl;
    }
    return 0;
}
