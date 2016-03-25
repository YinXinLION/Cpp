/*************************************************************************
	> File Name: 66.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月25日 星期五 20时36分43秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class xyz
{
    public:
    int x;
    int y;
    int z;
    xyz(int a, int b, int c) :x(a), y(b), z(c)
    {
    }
    void print()
    {
        cout << x << y << z << endl;
    }
};

template<class T>
class newxyz:public xyz
{
    public:
    T a;
    newxyz(T t1,int a, int b, int c) :xyz(a, b, c),a(t1)
    {

    }
    void print()
    {
        cout << "Ta=" << a << endl;
        cout << x << y << z << endl;
    }
};

int main(void)
{
    newxyz<string> new1("china",1, 3, 5);
    new1.print();

} 
