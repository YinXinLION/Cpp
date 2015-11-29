/*************************************************************************
	> File Name: 8.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月29日 星期日 20时06分36秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    const string hexdigits = "0123456789AVCDEF"; //可能的十六进制数字
    cout << "Enter a series of numbers between 0 and 15"
         << " sparated by spaces.Hit ENTER when finished: "
         << endl;
    string result;//用于保存十六进制的字符串
    string::size_type n; //用于保存从输入流读取的数
    while(cin >> n)
    {
        if(n < hexdigits.size()) //忽略无效输入
        result += hexdigits[n]; //得到对应的十六进制数字
    }
    cout << "Your hex number is:" << result << endl;
}
