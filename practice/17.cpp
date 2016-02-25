/*************************************************************************
	> File Name: 17.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月25日 星期四 10时53分34秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;

//新类型数组


int main(void)
{
    double db[4] = {1.1, 2.2, 3.3, 4.4};
    array<double, 4> dbnew = {1.11, 2.22, 3.33, 4.44};
    //double 元素类型 4 个数
    //新数组更安全
    for(int i = 0; i < 4; i++)
    {
        cout << db[i] << " " << dbnew[i] << endl;
    }
    array<double, 4> dbnew1;//可以实现数组之间的整体操作
    dbnew1 = dbnew;
    for(int i = 0; i < 4; i++)
    {
        cout << dbnew1[i] << endl;
    }

}
