/*************************************************************************
	> File Name: 21.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月27日 星期六 19时14分53秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
//lambda表达式，不仅仅适用于array,也适用于vector
using namespace std;

int main(void)
{
    vector<int> myvector;
    myvector.push_back(11);
    myvector.push_back(22);
    myvector.push_back(33);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);

    int res = 0;//结果
    //&res直接操作一个变量，res等价于返回值，x代表参数，每次充当迭代器指向的元素，大括号就是代码
    for_each(myvector.begin(), myvector.end(), [&res](int x){res += x;});
    cout << res;
}

