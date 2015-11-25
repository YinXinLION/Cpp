/*************************************************************************
	> File Name: 2.31.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 14时59分36秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int i = 42;
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1 ,&r1 = v1;
    const int *p2 = &v2 ,*const p3 = &i ,&r2 = v2;

    r1 = v2;//legal ,顶层常被忽略
  //  p1 = p2;//ilegal ,p2指向值无法修改 p1可以
    p2 = p1;//legal ,p2值可以修改
  //  p1 = p3;//ilegal ,p3有底层const
    p2 = p3;//legal ,p2指向的值和p3指向的值都无法改变
}
