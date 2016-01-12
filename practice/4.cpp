/*************************************************************************
	> File Name: 4.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月12日 星期二 11时35分17秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class single
{
    private:
    static single *p;
    protected:
    single()
    {

    }
    public:
    static single *makesignle()
    {
        if(p == NULL)
        {
            p = new single;
            cout << "new single" << endl;
        }

        return p;
    }
    void release_single()
    {
        delete p;
        p = NULL;
    }
};
single *single::p = NULL;

int main()
{ 
    single *p =single::makesignle();
    single *p1 = single::makesignle();
}
