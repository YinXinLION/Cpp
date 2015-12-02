/*************************************************************************
	> File Name: 3.23.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月02日 星期三 22时16分57秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> vec;
    for(int i = 0 ; i < 10 ; i++)
    {
        int t;
        cin >> t;
        vec.push_back(t);
    }
    for(auto i = vec.begin() ; i != vec.end() ; i++)
    {
        (*i) = (*i) * 2;
    }

    for(auto i : vec)
    cout << i << endl;

}
