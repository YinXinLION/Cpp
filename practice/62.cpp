/*************************************************************************
	> File Name: 62.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月22日 星期二 20时23分57秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<array>
#include<typeinfo>
using namespace std;
template<class T = double>
class myarray
{
    public:
    myarray()
    {
        cout << "构造" << typeid(T).name() << endl;
    }
    ~myarray()
    {
        cout << "销毁" << typeid(T).name() << endl;
    }
};
int main(void)
{
    myarray<> my1; //c++11新功能 默认参数
}
