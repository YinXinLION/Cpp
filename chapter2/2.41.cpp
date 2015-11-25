/*************************************************************************
	> File Name: 2.41.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 16时42分59秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

struct Sale_data
{
    std::string bookNo;
    unsigned units_sold ;
    double revenue ;
};

int main(void)
{
    Sale_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
    cout << book.bookNo << " " << book.units_sold << " " << price;

    return 0;
}

