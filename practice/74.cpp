/*************************************************************************
	> File Name: 74.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月26日 星期六 20时38分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

template <class T>
class myclass;
template <class T>
class runclass;
//友元类必须声明类的存在
//需要声明友元类，必须要与类型相关
template <class T>
class myclass
{
    myclass(T t):x(t)
    friend class runclass<T>;
    private:
    T x ;
    //int y;访问与Ｔ无关的类型，普通友元
};

template <class T>
class runclass
{
    public:
    void print(myclass<T> &my)
    {
        cout << my.x << endl;
    }
}


int main(void)
{
    myclass<int> my(1);

    runclass<int> run;
    run.print(my);
}
