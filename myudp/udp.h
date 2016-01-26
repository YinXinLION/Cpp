/*************************************************************************
	> File Name: udp.h
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年01月15日 星期五 21时23分04秒
 ************************************************************************/

#ifndef _UDP_H
#define _UDP_H
    int socket_recv();
    int socket_send(const char *IP);
//明确告诉C++编译器这是用C语言编译的函数,不用转化为C++函数格式
#endif
