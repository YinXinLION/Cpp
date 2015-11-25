/*************************************************************************
	> File Name: 2.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 20时03分44秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string word;
    while(cin >> word) //反复读取,直至到达文件末尾
        cout << word << endl;//逐个输出单词,每个单词后面紧跟一个换行
    return 0;
}
