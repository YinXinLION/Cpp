/*************************************************************************
	> File Name: 3.24.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月03日 星期四 17时31分51秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> text = {1,2,3,4,5,6};
    auto i = text.begin();
    auto j = text.end();
    j--;
    for( ; i < j; i++, j-- )
    {
        cout << *i + *j << endl;
    }
}
