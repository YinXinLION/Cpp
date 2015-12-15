/*************************************************************************
	> File Name: 1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月15日 星期二 17时02分59秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<vector>
#include<stdlib.h>
using namespace std;

class man
{
    private:
    char *name;
    int age;
    public:
    man()
    {
        name = new char[100];
        cout << "man" << endl;
    };
    man(const char *s ,int i) 
    {
        name = new char[100];
        cout << "man" << endl;
        strcpy(name ,s);
        age = i;
    };
    /*man(const man &it)       //浅拷贝
    {
        cout << "copy man" << endl;
        name =(char *) it.get_name();
        age = it.get_age();
    };*/
    
    man(const man &it)       //深拷贝
    {
        cout << "deep copy mane" << endl;
        name = new char[100];
        strcpy(name ,it.get_name());
        age = it.get_age();
    };
    void set_name(const char *s) 
    {
      strcpy(name ,s);
    };
    void set_age(int i)
    {
        age = i;
    };
    const char *get_name()const 
    {
        return name;
    }
    const int get_age()const
    {
        return age;
    };
    ~man()
    {
        delete []name;
        cout << "~man" <<endl;
    }
};
int main(void)
{
    man m1("Tom",10);
    cout << "m1.name = " << m1.get_name() << endl;
    cout << "m1.age = "<< m1.get_age() << endl;
    man m2 = m1;
    cout << "m2.name = " << m2.get_name() << endl;
    cout << "m2.age = " << m2.get_age() << endl;
    m1.set_name("Marry");
    cout << "m2.age = " << m2.get_name() << endl;
    printf("m1.name = %p\n",m1.get_name());
    printf("m2.name = %p\n",m2.get_name());
   /* 浅拷贝
      m1 m2 的name都指向同一块内存 ,由于指向同一块内存,析构发生会报错
      深拷贝
      m1 m2 的name指向不同的内存
   */

}
