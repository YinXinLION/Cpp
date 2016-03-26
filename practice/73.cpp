/*************************************************************************
	> File Name: 73.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月26日 星期六 20时02分52秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
template<class T>
class myclass;
template<class T>
void print(myclass<T> my);
template <class T>
class myclass
{
    public:
  friend void print<T>(myclass<T> my);
    private:
    int x = 0;
};
template<class T>
void print(myclass<T> my)
{
    my.x;
}

int main(void)
{
    myclass<int> my;
    print(my);
}
