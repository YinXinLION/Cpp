/*************************************************************************
	> File Name: 39.c
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月01日 星期二 21时05分45秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct YinXin
{
    int a;
    int b;
};

struct YinXin add(struct YinXin a1, struct YinXin a2)
{
    struct YinXin c;
    c.a = a1.a + a2.a;
    c.b = a1.b + a2.b;
    return c;
}

int main(void)
{
    struct YinXin a1 = { 2 , 4 };
    struct YinXin a2 = { 3 , 7 };
    struct YinXin a3;
    a3 = add( a1, a2 );
    printf("%d, %d",a3.a, a3.b);
}
