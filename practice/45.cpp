/*************************************************************************
	> File Name: 45.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月07日 星期一 20时12分46秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class demo 
{
    public:
    static int num;
    demo()
    {
        num++;
    }
};

int demo::num = 0;
int main(void)
{
    demo a;
    cout << demo::num << endl;
    demo b;
    cout << demo::num << endl;
}
