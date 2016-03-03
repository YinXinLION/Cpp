/*************************************************************************
	> File Name: 41.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月03日 星期四 17时04分36秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//所有的类默认都有一个构造,析构函数
//没有返回值
//括号智能初始化
class myclass
{
    public:
    myclass()
    {
        cout << "class create" << endl;
    }
    ~myclass()
    {
        cout << "class delete" << endl;
    }
};

void run()
{
    myclass myclass1;
}

int main(void)
{
    myclass myclass;
}
