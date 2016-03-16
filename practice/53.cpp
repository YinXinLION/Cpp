/*************************************************************************
	> File Name: 53.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月16日 星期三 19时48分39秒
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
    demo():i(0)
    {
    }
    demo& operator++();
    demo operator++(int)
    {
        demo temp;
        temp.i = (this->i)++;
        return temp; 
    }
    friend ostream &operator << (ostream &out, demo &a);
};

demo& demo::operator ++ ()//前++
{
    i++;
    return *this;
}


ostream &operator << (ostream &out, demo &a)
{
    out << a.i << endl;
    return out;
}
int main(void)
{
    demo a;
    a++;
    cout << a << endl;
    cout << ++a << endl;
    demo b = a++ ;
    cout << b << endl;
    cout << a << endl;
}
