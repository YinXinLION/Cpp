/*************************************************************************
	> File Name: duck2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月16日 星期三 21时02分24秒
 ************************************************************************/
//构造函数
#include<iostream>
#include<string>
using namespace std;
class Duck{
    private:
    string color;
    public:
    Duck(string c)
    {
        color = c;
    }
    void voice()
    {
        cout<<"Quack!Quack!"<<endl;
    }
    void print()
    {
        cout<<"color: "<<color<<endl;
    }
};

int main(void)
{
    Duck d1("yellow");
    d1.voice();
    d1.print();
}
