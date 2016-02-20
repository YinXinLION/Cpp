/*************************************************************************
	> File Name: bigdata3.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2016年02月20日 星期六 10时34分13秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

//C++struct 除了可以放数据还可以放函数
struct bigdata
{
    protected://内部私有
    char data1[100];
    char data2[100];
    public:
    void init(const char *str1, const char *str2)
    {
        strcpy(this -> data1, str1);
        strcpy(this -> data2, str2);
    }

    char *getbigdata()
    {
        int length1 = strlen(data1);
        int length2 = strlen(data2);
        int *pres = (int *)malloc(sizeof(int) * (length1 + length2));
        memset(pres, 0, sizeof(int) * (length1 + length2));

        for(int i = 0; i < length1; i++)
        {
            for(int j = 0; j < length2; j++)
            {
                pres[i+j+1] += (data1[i] -'0') * (data2[j] - '0');
            }
        }

        for(int i = length1 + length2 - 1; i >= 0; i--)
        {
            if(pres[i] >= 10)
            {
                pres[i - 1] += pres[i] / 10;
                pres[i] %= 10;
            }
        }
        int i = 0;
        while(pres[i] == 0)
        {
            i++;
        }

        char *lastres = (char *)malloc(sizeof(char) * (length1 + length2));
        int j;
        for(j = 0; j < (length1 + length2); j++, i++)
        {
            lastres[j] = pres[i] + '0';
        }
        lastres[j] = '\0';
        return lastres;
    }
};


int main(void)
{
    bigdata Lion;
    Lion.init("123", "30");
    cout << Lion.getbigdata() << endl;
}
