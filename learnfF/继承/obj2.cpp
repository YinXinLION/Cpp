/*************************************************************************
	> File Name: obj2.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月02日 星期一 19时01分42秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


class Base{
    private:
    int x;

    public:
    Base()
    {
        x = 0;
    }

    Base(int x)
    {
        this->x = x;
        cout << "Base cons" << endl;
    }

    void print()
    {
        cout << "X = "<< x << endl;
    }

    ~Base()
    {
        cout << "Base die " << endl;
    }
};

class DA:public Base{
    private:
    int y;

    public:
    DA()
    {
        y = 0;
        cout << "Y = " << y << endl;
    }
    DA(int i ,int j):Base(i)
    {
        y = j;
        cout << "Y = " << y << endl;
    }

    void print()
    {
        Base:print();
        cout << "Y = " << y << endl;
    }

    ~DA()
    {
        cout << "DA die " << endl;
    }
};

class DB:public Base{
    private:
    int z;

    public:
    DB()
    {
        z = 0;
        cout << "Z = " << z << endl;
    }

    DB(int i):Base(i+2)
    {
        z = i - 1;
        cout << "Z = " << z << endl;
    }

    void print()
    {
        Base:print();
        cout << "Z = " << z << endl;
    }

    ~DB()
    {
        cout << "DB die " << endl;
    }
};

int main(void)
{
    // DA *pa = new DA(3,4);
    // DB *pb = new DB(3);

    // delete (pa);
    // delete (pb);
    DA obja(3,4);
    DB objb(3);


}

























