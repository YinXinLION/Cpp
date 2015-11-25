/*************************************************************************
	> File Name: 3.5.1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 22时25分41秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string str;
    for(string buffer; cin >> buffer; str += (str.empty() ? "" :" ") + buffer) ;
    cout << "The concatenated string is " << str << endl; 
}
