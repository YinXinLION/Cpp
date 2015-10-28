/*************************************************************************
	> File Name: halfsearch.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年10月28日 星期三 15时55分07秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int halfsearch(int a[] ,int head ,int tail ,int key)
{
    int mid;
    if(head > tail)
    return -1;
    mid = (head + tail)/2;
    if(a[mid] == key)
    return mid;
    else if(mid > key)
    return halfsearch(a ,head ,tail - 1 ,key);
    else
    return halfsearch(a ,head + 1 ,tail ,key);
}



int main(void)
{
    int key;
    int flag;
    int a[10] = {12 ,16 ,18 ,23 ,27 ,30 ,51 ,77 ,81 ,99};
    cout << "输入想要查找的数字:";
    cin  >> key;
    flag = halfsearch(a ,0 ,9 ,key);
    if(flag == -1)
    cout << "为查询到次数字." << std::endl;
    else 
    cout << key << "是第" << flag + 1 << "个元素" << std::endl;
    return 0;
}
