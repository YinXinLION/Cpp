/*************************************************************************
	> File Name: 2.411.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年11月25日 星期三 16时50分22秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

struct Sale_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(void)
{
    Sale_data book1 ,book2;
    double price1 ,price2;
    std::cin >> book1.bookNo >> book1.units_sold >> price1;
    std::cin >> book2.bookNo >> book2.units_sold >> price2;
    book1.revenue = book1.units_sold * price1;
    book2.revenue = book2.units_sold * price2;

    if(book1.bookNo == book2.bookNo)
    {
        unsigned totalCnt = book1.units_sold + book2.units_sold;
        double totalRevenue = book1.revenue + book2.revenue;
        cout << book1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if(totalCnt != 0)
        cout << totalRevenue / totalCnt << endl;
        else 
        cout << "(no sales)" << endl;
        return 0;;
    }

    else 
    {
        cerr << "Data must refer to same ISBN" << endl;
        return -1;//indicate failure
    }
}
