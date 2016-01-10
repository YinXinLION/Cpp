/*************************************************************************
	> File Name: 2.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月10日 星期日 20时33分48秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<vector>
#include<stdio.h>
using namespace std;

class man
{
    private:
    char name[100];
    int age;
    public:
    void set_name(const char *str)
    {
        if(strcmp(str,"tom") == 0)
        return;
        strcpy(name,str);
    };
    char *get_name()
    {
        return name;
    };
    void set_age(int i)
    {
        age = i;
    };
    int get_age()
    {
        return age;
    };
};

int main(void)
{
    man m;
    m.set_name("tom");
    char *p = (char *)m.get_name();
    strcpy(p ,"tom") ;
    cout << m.get_name() << endl;
}
