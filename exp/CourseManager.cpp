/*************************************************************************
	> File Name: CourseManager.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年04月07日 星期四 21时54分02秒
 ************************************************************************/

#include"CourseManager.h"
#include<vector>
#include<iostream>
#include<string>
#include"Course.h"
using namespace std;
CourseManager::CourseManager(const Course *coursearray, int count)
{
    for(int i = 0; i < count; i++)
    {
        lesson.push_back(coursearray[i]);
    }
}

CourseManager::CourseManager(const vector<Course> &coursevect)
{
    auto begin = coursevect.begin();
    auto end = coursevect.end();
    for(auto it = begin; it != end; it++)
    {
        lesson.push_back(*it);
    }
}

CourseManager::CourseManager(const CourseManager &coursecopy)
{
    
}

int CourseManager::GetCourseNumber()
{
    return lesson.size();
}

bool CourseManager::addcourse(Course &course)
{
    lesson.push_back(course);
}

bool CourseManager::addcourse(vector<Course> &vector)
{
    auto begin = vector.begin();
    auto end = vector.end();
    for(auto it = begin; it != end; it++)
    {
        lesson.push_back(*it);
    }
}

bool CourseManager::delcourse()
{
    lesson.pop_back();
}

bool CourseManager::delcourse(int id)
{ 
    auto begin = lesson.begin();
    auto end = lesson.end();
    int count = 0;
    for(auto it = begin; it != end; it++)
    {
        if(it->Getid() == id)
        {
            lesson.erase(lesson.begin()+count);
        }
        count++;
    }
}

bool CourseManager::delcourse(string name)
{
    auto begin = lesson.begin();
    auto end = lesson.end();
    int count = 0;
    for(auto it = begin; it != end; it++)
    {
        if(it->GetCourseName() == name)
        {
            lesson.erase(lesson.begin()+count);
        }
        count++;
    }
}

void CourseManager::printcourselist()
{
    for(int i = 0; i < lesson.size();i++)
    {
        cout << lesson[i] << endl;
    }
}


void CourseManager::printcourselist(int id)
{
    auto begin = lesson.begin();
    auto end = lesson.end();
    int count = 0;
    for(auto it = begin; it != end; it++)
    {
        if(it->Getid() == id)
        cout << lesson[count] << endl;
    }
}

void CourseManager::printcourselist(string name)
{
    auto begin = lesson.begin();
    auto end = lesson.end();
    int count = 0;
    for(auto it = begin; it != end; it++)
    {
        if(it->GetCourseName() == name)
        cout << lesson[count] << endl;
    }
}

