/*************************************************************************
    > File Name: udp.c
    > Author:YinXin 
    > Mail:yinxin19950816@gmail.com 
    > Created Time: 2016年01月15日 星期五 21时22分45秒
 ************************************************************************/

#include<string.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include <arpa/inet.h>
#include<unistd.h>
#define SOCKET int
int socket_send(const char *IP)
{
    SOCKET st = socket(AF_INET, SOCK_DGRAM ,0);//windows下 无符号指针
    //socket()建立一个socket
    //第一个参数是指定socket要用那个协议, AF_INET=>TCP/IP协议 ,第二个参数明确什么协议 SOCK_DGRAM=>UDP协议 第三个参数一半默认为0
    struct sockaddr_in addr;
    /*
     * struct sockaddr_in{
     * short sin_family;
     * u_short sin_port;
     * struct in_addr sin_addr;
     * char sin_zero[8];
     * };
     */
    memset(&addr, 0, sizeof(addr));//初始化结构addr
    addr.sin_family = AF_INET;//要使用TCP/IP的地址
    addr.sin_port = htons(8080);//host to net short
    addr.sin_addr.s_addr = inet_addr(IP);
    //sendto windows 底层API di 第4个参数是优先级
    char buf[1024] = {0};
    size_t rc = 0;
    while(1)
    {
        memset(buf, 0, sizeof(buf));
        scanf("%s",buf);
        if(buf[0] == '0') //结束标志
        break;
        //发送udp数据
        rc = sendto(st, buf, strlen(buf), 0, (struct sockaddr *)&addr, sizeof(addr));
    }
    close(st);//使用完socket，要关闭
    return rc;
}

int socket_recv()
{ 
    struct sockaddr_in addr;
    SOCKET st = socket(AF_INET, SOCK_DGRAM ,0);//windows下 无符号指针
    memset(&addr, 0, sizeof(addr));//初始化结构addr
    addr.sin_family = AF_INET;//要使用TCP/IP的地址
    addr.sin_port = htons(8080);//host to net short
    addr.sin_addr.s_addr = htonl(INADDR_ANY);//接收方不需要指定IP地址
    int rc = 0;
    //sendto windows 底层API di 第4个参数是优先级
    if(bind(st, (struct sockaddr *)&addr, sizeof(addr)) > -1)//将端口号和程序绑定
    {
        char buf[1024] = {0};
        struct sockaddr_in sendaddr;
        memset(&sendaddr, 0, sizeof(sendaddr));
        socklen_t len = sizeof(sendaddr);
        while(1)
        {
            memset(buf, 0, sizeof(buf));
            rc = recvfrom(st, buf, sizeof(buf), 0, (struct sockaddr *)&sendaddr, &len);
            printf("%s\n",buf);
        }
    }
    close(st);//使用完socket，要关闭
    return rc;
}










