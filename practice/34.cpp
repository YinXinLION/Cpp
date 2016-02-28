/*************************************************************************
	> File Name: 34.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 22时20分20秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<thread>
#include<chrono>

using namespace std;
using namespace std::this_thread;

void add(int num)
{
    cout << num <<endl; 
}

int main(void)
{
    auto n = thread::hardware_concurrency();//返回CPU个数
    //返回同步的线程数量(公有静态函数)
    cout << n << endl;

   // cout << get_id() << endl;//线程ID号
    thread thread1(add, 1);
    thread thread2(add, 2);
    thread1.join();
    thread2.join();
}

int main1()
{
    vector<thread *> threads;
    for(int i = 0; i < 10; i++)
    {
        threads.push_back(new thread(add ,i));
    }
    for(auto th : threads)
    {
        th -> join();
    }
    return 0;
}

