/*************************************************************************
	> File Name: 3.4.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 22时10分28秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string line1 ,line2;
    getline(cin ,line1);
    getline(cin ,line2);
    if(line1.size() == line2.size())
    {
        cout << "相等" << endl;
    }
    else
    {
        if(line1.size() > line2.size() )
        cout << line1 << endl;
        else
        cout << line2 << endl;
    }
}
