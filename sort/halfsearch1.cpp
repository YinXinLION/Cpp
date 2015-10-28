/*************************************************************************
	> File Name: halfsearch1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年10月28日 星期三 16时12分42秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int halfsearch(int a[] ,int head ,int tail ,int key)
{
    int mid;
    while(head <= tail)
    {
        mid = (head + tail)/2;
        if(a[mid] == key)
        return mid;
        else if(a[mid] > key)
        tail = mid - 1;
        else
        head = mid + 1;
    }
    return -1;

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
    cout << "未查询到次数字." << std::endl;
    else 
    cout << key << "是第" << flag + 1 << "个元素" << std::endl;
    return 0;
}
