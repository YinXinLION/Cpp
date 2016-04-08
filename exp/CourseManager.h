/*************************************************************************
	> File Name: CourseManager.h
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年04月07日 星期四 18时36分50秒
 ************************************************************************/

#ifndef _COURSEMANAGER_H
#define _COURSEMANAGER_H
#include<vector>
#include"Course.h"
using namespace std;
class CourseManager
{
    private:
    vector<Course> lesson;
    int number;
    public:
    CourseManager();
    CourseManager(const Course *coursearray, int count);
    CourseManager(const vector<Course> &coursevect);
    CourseManager(const CourseManager &coursecopy);
    int GetCourseNumber();
    bool addcourse(Course &course);
    bool addcourse(vector<Course> &vector);
    bool delcourse();
    bool delcourse(int id);
    bool delcourse(string name);
    void printcourselist();
    void printcourselist(int id);
    void printcourselist(string name);


};
#endif
