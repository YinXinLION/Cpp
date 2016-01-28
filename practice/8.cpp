/*************************************************************************
	> File Name: 8.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月28日 星期四 18时41分45秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class mystring
{
    public:
    char *s;
    public:
    mystring()
    {
        s = new char[1024];
        cout << "mystring" << endl;
    }

    mystring(const mystring &it)
    {
        cout << "copy" << endl;
        s = new char[1024];
        memset(s, 0, 1024);
        strcpy(s, it.s);
    }

    ~mystring()
    {
        cout << "~mystring" << endl;
        delete []s;
    }
    
    mystring operator = (const mystring &it) //重载一个等号操作符
    {
        cout << "mystring = operator" << endl;
        memset(s, 0, 1024);
        strcpy(s, it.s);
        return *this;
    }

    mystring operator = (const char *str)
    {
        cout << "char * = operator" << endl;
        memset(s, 0, 1024);
        strcpy(s, str);
        return *this;
    }

    mystring operator = (int i)
    {
        cout << "int  = operator" << endl;
        memset(s, 0, 1024);
        sprintf(s, "%d", i);
        return *this;
    }

    mystring operator + (const mystring &it)
    {
        cout << "+ operator" << endl;
        strcat(s, it.s);
        return *this;
    }
    mystring operator + (const char *str)
    {
        cout << "char *+ operator" << endl;
        strcat(s, str);
        return *this;
    }
    mystring operator + (int i) //一元操作符重载
    {
        char temp[100] = {0};
        sprintf(temp, "%d", i);
        strcat(s, temp);
        return *this;
    }
};

mystring operator +(const char * str, const mystring &it)
{
    mystring str1;
    char buf[100];
    sprintf(buf, "%s%s", str, it.s );
    strcpy(str1.s, buf);
    return str1;
}
int main(void)
{
    mystring str1;
    str1 = "hello, ";
    mystring str2;
    strcpy(str2.s, "World");
    //str2 = str1;// 不是拷贝构造是等号操作
    //str2 = "hello";
    //str2 = 100;
    //cout << str2.s << endl;

    //str1 = str1 + str2 + 100 + " !!";
    
    //str3 = str1 + 100;
    //str3 = str1.operator+(100);
    mystring str3;
    str3 = "AAAA" + str1 + str2;
    cout << str3.s << endl;
    return 0;
}
