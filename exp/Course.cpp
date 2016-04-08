/*************************************************************************
	> File Name: Course.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年04月07日 星期四 21时40分10秒
 ************************************************************************/
#include"Course.h"
#include<iostream>
Course::Course(const Course &course)
{
    ID = course.ID;
    name = course.name;
}

string Course::GetCourseName()
{
    return this->name;
}

int Course::Getid()
{
    return this->ID;
}

void Course::Setid(int i)
{
    ID = i;
}

void Course::SetCourseName(const string &name)
{
    this-> name = name;
}


ostream & operator << (ostream &out, Course &course)
{
    out << "ID:" << course.ID << "Name:" << course.name << endl;
    return out;
}

