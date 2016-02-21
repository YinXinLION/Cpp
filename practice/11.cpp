/*************************************************************************
	> File Name: 11.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月21日 星期日 20时25分56秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
//处理类的私有

//函数模板实现通用，可以根据自有数据类型，进行优化
//结构体可以直接赋值，
class info
{
    public:
    char name[40];
    int data;
    private:
    int num;
    public:
    void set(int x)
    {
        this -> num = x;//通过接口设置私有变量
    }
    int get()
    {
        return num;
    }
};

template <typename T>
void swap(T &i, T &j)
{
    cout << "通用交换" << endl;

    T t = i;
    i = j;
    j = t;
}

template <>
void swap(info &i, info &j)
{
    cout << "info交换" << endl;
    info t;
    t = i;
    i = j;
    j = t;
}

int main(void)
{
    info info1;
    info info2;
    strcpy(info1.name, "YinXin");
    strcpy(info2.name, "Lion");
    info1.data = 20;
    info2.data = 10;

    info1.set(88);
    info2.set(66);
    ::swap(info1, info2);
    
    cout << info1.name << "  " << info1.data << "  " << info1.get() <<endl;
    cout << info2.name << "  " << info2.data<<"  " << info2.get() << endl;
    
}
