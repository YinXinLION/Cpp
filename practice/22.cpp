/*************************************************************************
	> File Name: 22.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月27日 星期六 19时35分43秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(void)
{
    vector<int> myvector(3, 2);
    myvector.push_back(11);
    myvector.pop_back();//弹出最后一个元素
    myvector.push_back(22);
    myvector.insert(myvector.begin() + 2 , 333);
    for(int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << endl;
    }
    myvector.erase(myvector.begin() + 3 );
    cout << endl;
    for(int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << endl;
    }

    myvector.clear();//删除所有元素
    for(int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << endl;
    }
}
