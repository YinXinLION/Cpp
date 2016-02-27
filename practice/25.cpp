/*************************************************************************
	> File Name: 25.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月27日 星期六 22时19分22秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<array>
using namespace std;

template<typename T>
void showarray(array<T, 5> myarray, int n)
{
    cout << "T" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << myarray[i] << endl;
    }
}

template<typename T>
void showarray(array<T *, 5> myarray, int n)
{
    cout << "T *" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << *myarray[i] << endl;
    }
}

int main(void)
{
    array<int, 5> myarray = {1,2,3,4,5};
    array<int *, 5> myarray1;
    array<int **, 5> myarray2;
    for(int i = 0; i < 5; i++)
    {
        myarray1[i] = &myarray[i];
    }
    for(int i = 0; i < 5; i++)
    {
        myarray2[i] = &myarray1[i];
    }

    showarray(myarray, 5);
    showarray(myarray1, 5);
    showarray(myarray2, 5);

}
