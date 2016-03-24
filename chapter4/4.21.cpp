/*************************************************************************
	> File Name: 4.21.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月24日 星期四 18时57分11秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> number ={1, 2, 3, 4, 5, 6, 7};
    for(auto &i: number)
    {
        if(i % 2 != 0)
        i *= i;
    }

    for(auto i: number)
    cout << i << endl;
}
