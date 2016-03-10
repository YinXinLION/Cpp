/*************************************************************************
	> File Name: 9.26.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月10日 星期四 22时10分24秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


int main(void)
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> A1(ia ,end(ia));
    list<int> A2(A1.begin(), A1.end());

    for(auto it = A1.begin();  it != A1.end(); )
    if(*it & 0x1) it = A1.erase(it);
    else ++it;

    for(auto it = A2.begin();  it != A2.end(); )
    if(! (*it & 0x1)) it = A2.erase(it);
    else ++it;
    
    for(auto i : A1)
    cout << i << endl;
    for(auto i : A2)
    cout << i << endl;
}
