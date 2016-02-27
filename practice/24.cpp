/*************************************************************************
	> File Name: 24.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月27日 星期六 20时58分22秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<new>
using namespace std;

const int buf(512);//限定一个常量整数512
int N(5);//数组的长度
char buffer[buf] = {0};//静态区
//p1 p3作为指针变量在栈区,存储的地址指向堆区
//手动释放内存
//p2 p4作为指针变量在栈区区,存储的地址在静态区
//自动释放内存，相当于缓冲区
//避免内存泄露牺牲了内存访问的独立性
int main(void)
{
    double *p1, *p2;
    p1 = new double[N];//分配内存，N个元素大小
    p2 = new (buffer)double[N];//指定区域分配内存
    for(int i = 0; i < N; i++)
    {
        p1[i] = p2[i] = i + 2.2;
        cout << p1[i] << " " << p2[i] << endl;
        cout << "p1" << &p1[i] << endl;
        cout << "p2" << &p2[i] << endl;
    }
    
    double *p3, *p4;
    p3 = new double[N];
    p4 = new (buffer)double[N];
    //p2 p4 用的内存相同

    
}
