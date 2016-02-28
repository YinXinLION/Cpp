/*************************************************************************
	> File Name: 30.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 19时04分06秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

namespace space //作用 隔离模板，避免冲突
{
    template<class T> using ptr = T*;//模板的简写
}

int add(int a, int b)
{
    return a + b;
}

typedef int (*ADD)(int a, int b);
using co = int;//using只可以用于简写数据类型
//以后尽量用using
using FUNC = int (*)(int a, int b);// 别名
int main(void)
{
    ADD p = add;
    cout << p(1, 2) << endl;
    FUNC p1 = add;
    cout << p1(1, 2) << endl;
    space::ptr<int> pint(new int(3));
    cout << *pint << endl;
}
