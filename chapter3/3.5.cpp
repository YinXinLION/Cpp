/*************************************************************************
	> File Name: 3.5.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 22时17分16秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string conccatenated;
    for(string buffer;cin >> buffer ; conccatenated += buffer) ;
    cout << "The conccatenated string is " << conccatenated << endl;
}
