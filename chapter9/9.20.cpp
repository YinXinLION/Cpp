/*************************************************************************
	> File Name: 9.20.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月10日 星期四 21时34分42秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<list>
#include<deque>
using namespace std;

int main(void)
{
    list<int> l{1,2,3,4,5,6,7,8,9,10};
    deque<int> odd, even;
    for(auto i: l)
    {
        (i & 0x1 ?odd :even).push_back(i);
    }
    for(auto i : odd) cout << i << " " << endl;
    for(auto i : even) cout << i << " " << endl;
    return 0;
}
