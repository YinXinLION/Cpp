/*************************************************************************
	> File Name: mystring.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月12日 星期二 22时51分50秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;
//一个单例的能够动态分配内存的字符串
class mystring
{
    private:
    static mystring *myself;
    char *p;
    public:
    static mystring*makestring(const char *s=NULL)
    {
        if(myself == NULL)
        {
            if(s == NULL)
            myself = new mystring;
            else
            myself = new mystring(s);
        }
        return myself;
    }
    static void delete_string()
    {
        if(myself != NULL)
        delete myself;

        myself = NULL;
    }
    protected:
    mystring():p(NULL)
    {
        
    }
    mystring(const char *s)
    {
        int len = strlen(s);
        this -> p = new char[len+1];
        strcpy(this -> p , s);
        this->p[len] = '\0';
    }
    public:
    const char *get_p() const
    {
       return p; 
    }
    protected:
    mystring(const mystring &it)//通过拷贝构造实现深拷贝，避免成员变量指针赋值导致的错误
    {
        int len = strlen(it.get_p());
        this->p = new char[len + 1];
        strcpy(this->p,it.p);
        this->p[len]='\0'; 
    }
    public:
    void set_p(const char *p)
    {
        if(p == NULL)
        {
            int len = strlen(p);
            this->p = new char[len+1];
            strcpy(this->p,p);
            this->p[len] = '\0';
        }
        else
        {
            int len1 = strlen(p);
            int len2 = strlen(this->p);
            if(len1 < len2)
            {
                strcpy(this->p,p);
                this->set_p(p);
            }
            else
            {
                delete []this -> p;
                this->p = new char[len1+1];
                strcpy(this->p,p);
                this->p[len2]='\0';
            }
        }
    }
    ~mystring()
    {
        delete []p;//将构造函数分配的内存空间释放
    }
};

mystring *mystring::myself = NULL;
int main(void)
{
    mystring *str = mystring::makestring("hello world");
    mystring *str1 = mystring::makestring("world hello");
    const char *s = str->get_p();
    cout << s << endl;
    mystring::delete_string();
    str1 = mystring::makestring("world hello");
    cout << str1 -> get_p() << endl;
    return 0;
}
