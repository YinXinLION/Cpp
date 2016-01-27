/*************************************************************************
	> File Name: 6.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月27日 星期三 21时45分50秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class demo
{
    private:
    int i;
    public:
    demo()
    {
        cout << "demo" << endl;
    }
    demo(const demo &it)
    {
        cout << "copy demo" << endl;
    }
    ~demo()//析构
    {
        cout << "~demo" << endl;
    }

    void set_i(int i)
    {
        this->i = i;
    }

    int get_i()
    {
        return i;
    }
};

void test(demo d)
{
    d.set_i(100);
}

demo test()
{
    demo d;
    return d;
}
/*
int main()
{
    demo d;//声明一个类的实例
    demo d1 ;
    d.set_i(100);
    d1 = d;
    cout << d1.get_i() << endl;


    cout << "Hello World" << endl;
    return 0;
}*/

/*
int main()
{
    demo d;
    test(d);
    cout << d.get_i() << endl;//输出为初始化的值
    return 0;
}
*/

int main(void)
{
    demo d = test();
    cout << "Hello World" << endl;
    return 0;
}


