/*************************************************************************
	> File Name: 6.17.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月20日 星期三 23时04分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;

void function1(const string &name);
void function2(string &name);
int main(void)
{
    string name("YinXin");
    function1(name);
    function2(name);
    cout << name << endl;
}

void function1(const string &name)
{ 
    for(auto &i : name)
    {
        if(isupper(i))
        {
            printf("exisit big one\n");
            return ;
        }
    }
    printf("no one big");
}

void function2(string &name)
{
    cout << strlen(name) << endl;
    /*
    for(int i = 0; i < strlen(name) ; i++)
    tolower(name[i]);
    */
    cout << name << endl;
}

