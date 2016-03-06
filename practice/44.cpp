/*************************************************************************
	> File Name: 44.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月06日 星期日 15时26分16秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class myclass{
    public:
    //myclass() = delete;// 默认删除构造函数
    myclass() = default;//默认存在构造函数
};

int main(void)
{
    myclass a;
}
