/*************************************************************************
	> File Name: first.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年09月16日 星期三 16时19分04秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Duck{
    public:
    void voice()
    {
        cout<<"Quack!Quack!"<<endl;
    }
};

int main(void)
{
    Duck d1;//创建Duck类的对象d1
    d1.voice();
    return 0;
}
