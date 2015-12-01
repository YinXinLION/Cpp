/*************************************************************************
	> File Name: 10.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 20时12分03秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<unsigned> scores(11 ,0); //11个分数段,全都初始化为0
    unsigned grade;
    while(cin >> grade)
    {   //读取成绩
        if(grade <= 100) //只处理有效的成绩
        ++scores[grade/10]; //将对应分数段的计数值加1
    }

    for(auto i : scores)
    cout << i << endl;
}
