/*************************************************************************
	> File Name: 63.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月22日 星期二 20时49分21秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

template<class T>
class Array
{
    public:
    Array()
    {
        p = nullptr; //空指针
        n = 0;
    }
    Array(int length)
    {
        p = new T[length];
        n = length;
    }
    ~Array()
    {
        delete []p;
        n = 0;
    }
    int size()
    {
        return n;
    }
    T get(int num)//num是数组的下标
    {
        if(num >= n || num < 0)
        {
            cout << "error" << endl;
        }
        else
        return *(p+num);
    }
    void set(T data, int num)
    {
        if(num < 0 || num >= n)
        {

        }
        else
        {
            p[num] = data;
        }
    }
    public:
    T *p;
    int n; //长度
};
int main(void)
{
    Array<string> myarray(5);//构造5个元素的数组
    string str = "YinXin";
    for(int i = 0; i < myarray.size(); i++)
    {
        str += "1";
        myarray.set(str, i);
        cout << myarray.get(i) << endl;
    }

}
