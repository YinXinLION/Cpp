/*************************************************************************
	> File Name: 5.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月12日 星期二 22时34分58秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class demo
{
    public:
    demo()
    {
        cout << "demo" << endl;
    }
    demo(int i)
    {
        cout << "demo int " << i  << endl;
    }
    ~demo()
    {
        cout << "~demo" << endl;
    }

};

int main(void)
{
    
    demo d[3] = {demo(1),demo(2),demo(3)};
    cout << "hello world " << endl;
    return 0;

}
