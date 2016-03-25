/*************************************************************************
	> File Name: 69.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月25日 星期五 22时01分59秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

template<class T>
class myclass
{
    public:
    T x;
    T y;
    friend void print(myclass<T> &my) //放在类模板内
    {
        cout << my.x << " " << my.y << endl;
    }
    myclass(T t1, T t2):x(t1), y(t2)
    {

    }
    friend myclass *operator+(const myclass<T> &my1, const myclass<T> &my2)
    {
        myclass<T> *p = new myclass(my1.x+my2.x, my1.y+my2.y);
        return p;
    }
};

int main(void)
{
    myclass<int> my(1, 2);
    print(my);
    myclass<int> my1(1, 3);
    myclass<int> my2(2, 1);
    myclass<int> *pclass = my1 + my2;
    print(*pclass);
}
