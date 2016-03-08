/*************************************************************************
	> File Name: 46.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月07日 星期一 20时26分56秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class myclass
{
    public:
    int num;
    int data;
    int *p;
    const int coint;
    int &myint;
    static int shu;//声明
   //引用 常量 必须在构造的时候初始化 
    public:
    static void go()
    {
        
    }

    myclass(int data1, int data2):coint(data1),myint(data2)
    {

    }

    void run()
    {
        
    }

    ~myclass()
    {

    }

};

//vs2013中cout <<< my1.myint << endl;会打印出地址， 
int myclass::shu = 0;//初始化

int main(void)
{
    myclass my1(2, 4);
    cout << my1.coint << my1.myint << endl;
    int data = 30;
    my1.myint = data;//引用竟然可以改变了
    cout << my1.myint << endl;
}
