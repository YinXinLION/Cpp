/*************************************************************************
	> File Name: 9.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月29日 星期五 01时31分48秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class demo 
{
    public:
    demo(const demo &it)
    {
        cout << "copy" << endl;
    }
    demo()
    {
        cout << "demo" << endl;
    }
    ~demo()
    {
        cout << "~demo" << endl;
    }

    demo test()
    {
        return *this;
    }
};

int main()
{
    demo m;
    m.test();
    //
    return 0;
}


