/*************************************************************************
	> File Name: 2.38.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 16时24分43秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int i = 0,&r = i;
    //same
    //auto a = i;
    //decltype(i) b = i;
    //defferent "c" will be int "d" will be int &
    auto c = r;
    decltype(r) d = r;

    printf("%p\n",&r);
    printf("%p\n",&d);
}
