/*************************************************************************
	> File Name: 5.5.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月24日 星期四 23时20分44秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    for(int g; cin >> g;)
    {
        string letter;
        if(g < 60)
        {
            letter = scores[0];
        }
        else
        {
            letter = scores[(g - 50) / 10];
            if(g != 100)
            letter += g % 10 > 7 ? "+" : g%10<3?"-" :"";
        }
        cout << letter << endl;
    }
}
