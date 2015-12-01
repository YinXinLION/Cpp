/*************************************************************************
	> File Name: 3.20.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 22时00分45秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    int num ,sum = 0 ,t = 0;
    vector<int> str;
    for(int i = 0; i < 4;i++)
    {
        cin >> num;
        str.push_back(num);
    }
    for(auto i : str)
    {
        t++;
        sum += i;
        if(t % 2 == 0)
        {
            cout << sum << endl;
            sum = 0;
        }
    }

}
