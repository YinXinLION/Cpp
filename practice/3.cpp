/*************************************************************************
	> File Name: 3.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月12日 星期二 00时53分43秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;

class man{
    private:
    int age;
    public:
    man *get_this()
    {
        return this;
    }
};

int main(void)
{
    man m1;
    printf("%p\n",(void *)&m1);
    printf("%p\n",m1.get_this());
}
