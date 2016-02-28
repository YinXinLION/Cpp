/*************************************************************************
	> File Name: 31.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 19时40分09秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//模板元 ： 把运行时消耗的时间在编译期间进行优化

template<int N>
struct data
{
    enum {res = data< N - 1>::res + data< N - 2>::res};
};

template<>
struct data<1>
{
    enum {res = 1};   
};

template<>
struct data<2>
{
    enum {res = 1};
};

int getdata(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return getdata(n - 1) + getdata(n - 2);
    }
}

int main(void)
{
    cout << getdata(40) << endl;
    int num = data<40>::res;//100报错溢出 
    cout << num << endl;
}

//主要思想
//
//利用模板特化机制实现编译期条件选择结构， 利用递归模板实现编译期循环结构，模板元程序则由编译器在编译器解释执行
//
//优劣及适用情况
//
//通过将计算从运行期转移至编译期，在结果程序启动之前做尽可能多的工作，最终获得速度更快的程序，
//优势在于:
    //1.以编译耗时为代价换来卓越的运行期性能(一般用于为性能要求严格的数值计算换取更高的性能)。通常来说，一个有意义的程序的运行次数(或服役时间)是远远超过编译次数(或编译时间)
    //
    //2.提供编译期类型计算，通常这才是模板元编程大放异彩的地方。
    //
//缺点:
    //1.代码可读性差，以类模板的方式描述算法有些抽象
    //
    //2.调试困难
    //3.可移植性差
