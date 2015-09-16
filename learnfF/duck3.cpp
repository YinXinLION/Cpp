/*************************************************************************
	> File Name: duck3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年09月16日 星期三 21时11分55秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
//重载
class Duck{
    private:
    string color;
    public:
    Duck()
    {
        color = "gray";
        cout<<"无参constructor"<<endl;
    }
    Duck(string color)
    {  
        this -> color = color;
        cout<<"有参constructor"<<endl;
    }
    void print()
    {
        cout<<color<<endl;
    }

};

int main(void)
{
    Duck d1;
    Duck d2("yellow");
    d1.print();
    d2.print();

}
