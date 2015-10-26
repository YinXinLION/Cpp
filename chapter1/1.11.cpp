/*************************************************************************
	> File Name: 1.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年10月24日 星期六 13时04分47秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int v1 ,v2 ,t;
    std::cout << "please input two number:" ;
    std::cin >> v1 >> v2;
    if(v1 > v2)
    {
        t = v1;
        v1 = v2;
        v2 = t;
    }
    for(v1 ; v1 <= v2 ;v1 ++)
    {
        std::cout << v1 << " ";
    }
    return 0;
}
