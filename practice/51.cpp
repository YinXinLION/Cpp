/*************************************************************************
	> File Name: 49.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月13日 星期日 18时59分59秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
//运算符重载

class mycomplex
{
    public:
    int x; 
    int y;//x，y坐标
    //参数列表不用this->x(x);
    mycomplex(int x, int y):x(x),y(y)
    {
        this->x += 1;
        this->y += 1;
    }
    void show()
    {
        cout << x << "+" << y << "i" << endl;
    }
    //ostream标准的输入输出流
    ~mycomplex()
    {
        

    }

    void operator ++()
    {
        ++this->x;
        ++this->y;
    }
    void operator --()
    {
        --this->x;
        --this->y;
    }
    void operator() (int num)
    {
        cout << num << endl;
    }
};
    istream &operator >>(istream & in, mycomplex &Complex)
    {
        cout << "~~~" << endl;
        in >> Complex.x >> Complex.y;
        return in;
    }    
int main(void)
{
    mycomplex my3(0,0);
    cin >> my3;
    my3.show();
    ++my3;
    my3.show();
    --my3;
    my3.show();
    my3(1);
}
