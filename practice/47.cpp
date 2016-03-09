/*************************************************************************
	> File Name: 47.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月09日 星期三 19时43分21秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//类中const默认可以修改，与C语言一致
class myclass
{
    public:
    int num = 1;//默认初始化的值C++11特性
    const int data = 90;
    
    static void run(myclass run1)
    {
        cout << run1.num << "  " << run1.data << endl;
    }

};

int main(void)
{
    myclass run1;
    myclass::run(run1);
}
