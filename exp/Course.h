/*************************************************************************
	> File Name: Course.h
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年04月07日 星期四 18时29分26秒
 ************************************************************************/

#ifndef _COURSE_H
#define _COURSE_H
#include<string>
#include<iostream>
using namespace std;
class Course
{
    private:
    int ID;
    string name;
    public:
    Course();
    Course(const string name)
    {
        this->name = name;
    };
    Course(const Course &course);//拷贝构
    string GetCourseName();//获取课程名
    void SetCourseName(const string &name);//设置课程名
    int Getid();//获取id
    void Setid(int i);//设置id
    friend ostream& operator << (ostream &out, Course &lesson);//重载<< 打印信息
};
#endif
