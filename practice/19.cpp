/*************************************************************************
	> File Name: 19.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月25日 星期四 20时13分16秒
 ************************************************************************/

#include<iostream>
#include<array>
#include<vector>
#include<string>
using namespace std;
//Ｃ++风格数组不需要管理内存
//array注意不要栈溢出
//array适用于任何类型
    
int main(void)
{
    //突破栈限制
    //C里 数组超过1M 栈溢出
    array<int, 3> myint = {1, 2, 3};
    // 超出array<double,1024*1024> mydouble;
    vector<double> myvector;
    for(int i = 0; i < 1024*1024; i++)
    {
        myvector.push_back(i);//动态数组 在堆上
    }
    array<int, 2> myint1 = {1, 2};
    array<int, 2> myint2 = {3, 4};
    array<int, 2> myint3 = {5, 6};
    array<array<int, 2>, 3> myint4 = {myint1, myint2, myint3};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        cout << myint4[i][j] << "  ";
        cout << endl;
    }
    vector<string>  string1;//动态字符串数组
    string1.push_back("hello");
    string1.push_back("world");
    for(int i = 0; i < string1.size(); i++)
    {
        cout << string1[i].c_str() << endl;
    }
    //string1.pop_back();
    cout << string1.size() << endl;
    string.push_back("C++");
    vector<string>::iterator ibegin,iend;
    ibegin = string1.begin();
    iend = string1,end();
    for(; ibegin != iend; ibegin++)
    {
        string tempstr = *ibegin;//获取指针指向的数据
    }
}
