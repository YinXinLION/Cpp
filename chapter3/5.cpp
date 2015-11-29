/*************************************************************************
	> File Name: 5.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 19时32分21秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string s("Hello World!!!");
    //punct_cnt的类型和s.size的返回类型一样;unsigned
    decltype(s.size()) punct_cnt = 0;
    //统计s中标点符号的数量
    for(auto c : s) //对于s中的每个字符
    if(ispunct(c))
    ++punct_cnt;    //将标点符号的计数值加1
    cout << punct_cnt
    << "punctuation characters in " << s << endl;
}
