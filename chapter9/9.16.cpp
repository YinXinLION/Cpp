/*************************************************************************
	> File Name: 9.16.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月10日 星期四 20时07分45秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

int main(void)
{
    list<int> li{1,2,3,4,5};
    vector<int> vec2{1,2,3,4,5};
    vector<int> vec3{1,2,3,4};

    cout << vector<int>(li.begin(),li.end()) == vec2 ? "true" : "false" << endl;
}
