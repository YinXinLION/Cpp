/*************************************************************************
	> File Name: 26.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月27日 星期六 22时55分20秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//处理不限定个数的参数

void showall()//最后结束递归
{
    cout << "heloo " << endl;
}

template<typename T , typename...Args>
void showall(const T &value, Args&...args)
{
    cout << value << endl;
    showall(args...);//继续传递。
}

int main(void)
{
    int num1 = 10, num2 = 9, num3 = 11;
    double db1 = 10.2, db2 = 9.9;
    char str[40] = "YinXin";
    char ch = 'A';
    showall(num1);
    cout << endl;
    showall(num1, num2, num3);
    cout << endl;
    showall(db1, db2, num1, ch);
}
