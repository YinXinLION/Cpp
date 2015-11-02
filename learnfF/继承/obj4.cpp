/*************************************************************************
	> File Name: obj4.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月02日 星期一 23时40分39秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


class Myclass{
    private:
    int x ,y;

    public:
    Myclass()
    {
        x = 0;
        y = 0;
    }

    Myclass(int , int); //declare
    void print();
};

    Myclass::Myclass(int x ,int y)
    {
        this->x=x;
        this->y=y;
    };
    void Myclass::print()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    };
int main(void)
{
    Myclass obj(1,2);
    obj.print();
    return 0;
}
