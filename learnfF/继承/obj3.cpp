/*************************************************************************
	> File Name: obj3.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月02日 星期一 22时46分38秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Base{
    protected:
    int x ,y;

    public:
    Base()
    {
        x = 0;
        y = 0;
    }

    Base(int x ,int y)
    {
        this->x = x;
        this->y = y;
    }

    void print()
    {
        cout << "Base X = " << x << endl;
        cout << "Base Y = " << y << endl;
    }
};

class D1:public Base{
    private:
    int z;

    public:
    D1()
    {
        z = 0;
    }
    
    D1(int i):Base(i , i + 2)
    {
        z = i;
    }

    void print()
    {
        Base::print();
        cout << "Z = " << z << endl;
        cout << "D1 X = " << x << endl;
        cout << "D1 Y = " << y << endl;
    }
};



int main(void)
{
    D1 obj(1);
    obj.print();
    return 0;
}
