/*************************************************************************
	> File Name: 23.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月27日 星期六 20时19分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(void)
{
    int int1 = 10;
    double double1 = 10.8;
    char ch = 'A';
    char *str = "hello";
    int a;
    tuple<int, double, char, const char *> mytuple(int1, double1, ch, str);
    auto data = get<0>(mytuple);
    auto data1 = get<1>(mytuple);
    auto data2 = get<2>(mytuple);
    auto data3 = get<3>(mytuple);
    cout << data << " " << data1 << " " << data2 << " " << data3 << endl;
}

//tuple必须是一个静态数组
//配合vector 和　array
//mytuple.swap(mytuple) ,array , vector 都有交换功能
//下标只能是常量
