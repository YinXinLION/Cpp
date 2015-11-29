/*************************************************************************
	> File Name: 3.10.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 20时46分59秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Enter a string of characters including punctuation." << endl;
    for(string s ;getline(cin , s) ; cout << endl)
    for(auto i : s)
    if(!ispunct(i)) cout << i;

    return 0;
}
