/*************************************************************************
	> File Name: 71.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月26日 星期六 17时31分34秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;


class jia
{
    public:
    jia(int a, int b):x(a), y(b)
    { 

    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    int newjiafa(int a , int b)
    {
        if(a == 0)
        return b;
        else if(b == 0)
        return a;
        else
        {
            int res = a ^ b;
            int wei = (a & b) << 1;
            return newjiafa(res, wei);
        }
    }
    private:
    int x;
    int y;
};
//相加异或
//进位为与
int main(void)
{
    jia a(1, 2);
    cout << a.newjiafa(a.getx(), a.gety()) << endl;
}
