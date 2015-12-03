/*************************************************************************
	> File Name: 12.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月03日 星期四 16时51分41秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> text = {1 ,2,3,4,5,6,7,8,9};
    int sought = 2;
    auto beg = text.begin();
    auto end = text.end();
    auto mid = text.begin() + (end - beg) / 2; //初始化状态下的中间点
    //当还有元素尚未检查并且我们还没找到sought时执行循环
    while(mid != end && *mid != sought)
    {
        if(sought < *mid) //前半部分
            end = mid;
        else 
            beg = mid + 1;
        mid = beg + (end - beg) / 2; //新的中间点
    }

    if(mid == end)
    cout << "未找到"<< endl;
    else 
    cout << "找到了" << endl;
}
