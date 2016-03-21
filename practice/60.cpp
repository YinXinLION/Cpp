/*************************************************************************
	> File Name: 60.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月21日 星期一 21时33分32秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;

//vector就是一个类模板
//STL boost本质上是类模板库
//类模板实际上对于使用不同数据类型，但是操作方法一样的类的一种抽象
template <class T>
class com
{
    public:
    T a;
    T b;
    T add()
    {
        cout << typeid(T).name() << endl;
        return a + b;
    }
};

int main(void)
{
    com<int> comx;
    comx.a = 19;
    comx.b = 29;
    cout << comx.add() << endl;
}
