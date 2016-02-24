/*************************************************************************
	> File Name: 15.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月24日 星期三 19时01分32秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//const_cast
//const int num = 10;可以修改但是无法生效，编译的时候不会读内存
//在符号表里查找的
//去掉const（常量）属性 要用到 const_cast

int main(void)
{
    int num[3] = {1, 2, 3};
    const int *p = num;
    cout << *p << " " << *(p+1) << " " << *(p+2) << endl;

    int *pnew = const_cast<int *>(p);
    cout << *pnew << endl;
    pnew = nullptr;
}
