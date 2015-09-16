/*************************************************************************
	> File Name: duck.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年09月16日 星期三 16时23分23秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Duck{
    private:
    string color;

    public:
    void voice()
    {
        cout<<"I am "<<color<<" Quack,Quack"<<endl;
    }

    void setcolor(string c)
    {
        color = c;
    }
};

int main(void)
{
    Duck d1,d2;
    d1.setcolor("yellow");
    d1.voice();

    d2.setcolor("black");
    d1.voice();
}
