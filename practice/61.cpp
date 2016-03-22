/*************************************************************************
	> File Name: 61.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月22日 星期二 20时17分35秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
//定义2种类型的类模板
//STL 数据结构 算法， 适用任何类型
template<class T1, class T2>
class myclass
{
    public:
    T1 t1;
    T2 t2;
    myclass(T1 t11, T2 t22):t1(t11), t2(t22)
    {

    }
    void print()
    {
        cout << t1 << " " << t2 << endl;
    }
};

int main(void)
{
    myclass<int, double> my1(10, 20.8);
    my1.print();
    myclass<double, string> my2(20.8, "12345abc");
    my2.print();
}
