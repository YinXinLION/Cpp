/*************************************************************************
	> File Name: 43.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月03日 星期四 18时55分18秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;

class classobj
{
    public:
    int num;
    public:
    explicit classobj(int data)
    {
        num = data;
        cout << "被构造" << num << endl;
    }
    ~classobj()
    {
        cout << "被销毁" << num << endl;
    }

};

int main()
{
    //classobj num = 5;//去掉explicit就可以编译通过
    //classobj data(5);
    classobj obj(0);//创建对象必须要构建合适的构造函数
    classobj *p = new classobj(1);  
    //classobj *p = new (classobj[5](5)); 错误
    array<classobj, 2> A= {obj, *p}; 
    //构造函数明确的情况下要用C++数组array    
}
