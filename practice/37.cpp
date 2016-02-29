/*************************************************************************
	> File Name: 37.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月29日 星期一 22时07分59秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void hanoi(int n, char a, char b, char c)
{
    if(n >= 1)
    {
        hanoi(n - 1, a, c, b);
        cout << a << "-->" << c << endl;
        hanoi(n - 1, b, a, c);
    }
}

int main(void)
{
    int m;
    cout << "Input the number of diskes: " << endl;
    cin >> m;
    hanoi(m, 'A', 'B', 'C');
}
