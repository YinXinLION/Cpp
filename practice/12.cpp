/*************************************************************************
	> File Name: 12.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月24日 星期三 11时07分46秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<functional>
using namespace std;


//函数包装器, T数据类型，F函数
//
//1.设计执行接口，接口设计关卡，计数
//2.函数包装器依赖于函数模板，实现通用泛型
//3.函数代码可以内嵌在另外一个函数
template <typename T, typename F>
T run(T v, F f)
{
    return f(v);
}

int main(void)
{
    double db = 10.23;

    function<double(double)> fun1 = [](double a)
    {
        return a;
    };

    cout << fun1(db) << endl;
}
