/*************************************************************************
	> File Name: 48.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月13日 星期日 18时03分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class myclass
{
    public:
    int x;

    int y;
    myclass(int a, int b):x(a),y(b)
    {

    }
    public:
    void printxy();

};

void myclass::printxy()
{
    cout << x << "  " << y << endl;
}

int main(void)
{
    //myclass *p = new myclass;
    myclass *p(new myclass(1, 2));
    p -> printxy();
}
