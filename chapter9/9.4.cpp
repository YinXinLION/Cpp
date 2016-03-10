/*************************************************************************
	> File Name: 9.4.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月10日 星期四 19时17分13秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int judge(vector<int>::iterator first, vector<int>::iterator last, const int value);
int main(void)
{
    
    vector<int> A(10);

    int value = 0;
    cin >> value;

    A.push_back(10);
    A.push_back(12);
    A.push_back(33);//vector 增加减少长度会让迭代器失效,如果first在此之前定义
    /*
    vector<int> A{10,22,33,44};
    int value;
    cin >> value;
    */
    auto first = A.begin();
    auto last = A.end();

    cout << judge(first, last, value) << endl;
}

int judge(vector<int>::iterator first, vector<int>::iterator last, const int value)
{ 
    for(;first != last; ++first)
    {
        if(*first  == value)
        return true;
    }
    return false;
}
