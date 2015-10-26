/*************************************************************************
	> File Name: 1.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月24日 星期六 11时44分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int i = 50;
    int sum = 0;
    while(i < 101)
    {
        sum += i;
        i++;
    }
    std::cout << sum << std::endl;
}
