/*************************************************************************
	> File Name: 9.15.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月10日 星期四 20时03分54秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> vec1{1,2,3,4,5};
    vector<int> vec2{1,2,3,4,5};
    vector<int> vec3{1,2,3,4};

    cout << (vec1 == vec2 ? "true" : "false") << endl;
    cout << (vec1 == vec3 ? "true" : "false") << endl;
}
