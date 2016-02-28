/*************************************************************************
	> File Name: 27.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月28日 星期日 10时52分48秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
template<class T>
void com(T arg) //模板函数，引用无效
{
    arg++;
}



int main(void)
{
    int count = 10;
    int &rcount = count;
    com(count);
    cout << count << endl;
    com(rcount);
    cout << rcount << endl;
    com(reference(count));
    cout << count << endl;


}
