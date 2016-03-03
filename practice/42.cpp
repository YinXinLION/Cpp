/*************************************************************************
	> File Name: 42.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月03日 星期四 17时40分48秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//
class fushu
{
    public:
    fushu();
    ~fushu();
};

fushu::fushu()
{
    cout << "fushu构建" << endl;
}

fushu::~fushu()
{
    cout << "fushu销毁" << endl;
}

class math
{
    public:
    fushu fushu1;
    math()
    {
        cout << "math构建" << endl;
    }
    ~math()
    {
        cout << "math销毁" << endl;
    }
};

void go()
{
    math math1;    
}

int main(void)
{
    go();
}
