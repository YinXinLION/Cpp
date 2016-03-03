/*************************************************************************
	> File Name: 40.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月01日 星期二 21时44分52秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//::前面是类名或者命名空间

class fushu
{
    public:
    int x;
    int y;
    public:
    void show()
    {
        cout << "show" << endl;
    }
};

int main(void)
{
    fushu fushu1;
    fushu1.show();
}
