/*************************************************************************
	> File Name: udp.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月15日 星期五 21时13分33秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include"udp.h"
using namespace std;

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        socket_send(argv[1]);
    }
    else
    {
        socket_recv();
    }
    return 0;
}
