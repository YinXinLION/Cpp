/*************************************************************************
	> File Name: 1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年03月23日 星期三 12时49分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct course
{
    int ID;
    string name; //课程名
};
void menu();
void input(vector<course> &lesson);
void init(vector<course> &lesson);
void info(vector<course> lesson); //迭代器 case 1 输出信息
void long_name(vector<course> lesson);
void delete_lesson(vector<course> &lesson);

void size(vector<course> lesson);
int main(void)
{
    vector<course> lesson;
    init(lesson);
    while(1)
    {
        cout << "按0获取帮助信息" << endl;
        input(lesson);
    }
}

void menu()
{
    cout << "0. 程序帮助信息" << endl;
    cout << "1, 打印存储的所有课程ID，和课程名" << endl;
    cout << "2. 打印课程数量" << endl;
    cout << "3. 打印名字最长的课程信息" << endl;
    cout << "4. 删除最后一个课" << endl;
    cout << "5, 退出程序" << endl;
}

void input(vector<course> &lesson)
{
    int choose;
    cin >> choose;
    switch(choose)
    {
        case 0:
            menu();break;
        case 1:info(lesson);break;
        case 2:size(lesson);break;
        case 3:long_name(lesson);break;
        case 4:delete_lesson(lesson);break;
        case 5:exit(0);break;
    }

}


void init(vector<course> & lesson)
{
    struct course name;
    int i;
    string names[7] = {"Linux", "c++", "HTML", "HTML5", "NodeJS","Shell", "Python"};
    i = 0;
    for(auto t: names)    //push_back前一定要先把数据搞好在放入后头
    {
        course name;
        name.name = t;
        name.ID = i;
        lesson.push_back(name);
        i++;
    }
}

void info(vector<course> lesson) //迭代器 case 1 输出信息
{
    auto begin = lesson.begin();
    auto end = lesson.end();
    for(; begin != end; begin++)
    {
        cout << "ID:" << begin->ID << "Name:" << begin->name << endl; 
    }
}


void size(vector<course> lesson)
{
    cout << lesson.size() << endl;
}

void long_name(vector<course> lesson)
{
    int long_size;
    auto begin = lesson.begin();
    auto end = lesson.end();
    int max = 0;
    for(auto it = begin; it != end; ++it)
    {
        if((it->name).size() > max)
        max = (it->name).size();
    }
    for(auto it = begin; it != end; ++it)
    {
        if((it->name).size() == max)
        cout << "ID:" << it->ID << "Name:" << it->name << endl; 
    }
}

void delete_lesson(vector<course> &lesson)
{
    if(lesson.size() == 0)
    {
        cout << "no lesson" << endl;
        return;
    }
    else
    {
        lesson.pop_back();
    }

}
