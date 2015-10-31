/*************************************************************************
	> File Name: obj.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年10月31日 星期六 23时58分18秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class myclass{
    public:
    myclass()
    {
        cout << "myclass cons" << endl;
    }
    ~myclass()
    {
        cout << "myclass die " << endl;
    }
};

class yourclass{
    public:
    yourclass()
    {
        cout << "yourclass cons" << endl;
    }
    ~yourclass()
    {
        cout << "yourclass die " << endl;
    }
};

class Base{
    private:
    myclass my;

    public:
    Base()
    {
        cout << "Base cons " << endl;
    }
    ~Base()
    {
        cout << "Base die  "  << endl;
    }
};

class derivative:public Base{
    private:
    myclass objmy;
    yourclass objyour;

    public:
    derivative()
    {
        cout << "derivative cons" << endl;
    }
    ~derivative()
    {
        cout << "derivative die " << endl;
    }
};

int main(void)
{
    derivative a;
    return 0;
}

