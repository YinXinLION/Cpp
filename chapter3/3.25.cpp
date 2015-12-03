/*************************************************************************
	> File Name: 3.25.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月03日 星期四 17时38分22秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<unsigned> scores(11 ,0);
    int grade;
    for(int i = 0; i < 5; i++)
    {
        auto t = scores.begin();
        cin >> grade;
        ++*(scores.begin() + grade / 10 - 1);
    }


    for(auto i  : scores)
    cout << i << "   ";
    cout << endl;
}
