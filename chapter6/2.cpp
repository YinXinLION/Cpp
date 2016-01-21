/*************************************************************************
	> File Name: 2.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月21日 星期四 12时29分24秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    int c[4] = {1, 2, 3, 4};
    int *a[4];
    int (*b)[4];
    b = &c;
    for(int i = 0; i<4; i++)
    {
        a[i] = &c[i];
    }
    cout << *a[1] << endl;
    cout << (*b)[2] << endl;
    return 0;
}
