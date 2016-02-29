/*************************************************************************
	> File Name: 36.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月29日 星期一 20时51分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//空类占一个字节
//代码不计入sizeof
class kong
{
    public:
    //int num;
    void go()
    {
        cout << "CS GO" << endl;
    }
};

int main(void)
{
    cout << sizeof(kong) << endl;//1个字节表示类存在
    kong kong1;
    cout << &kong1 << endl;
}
