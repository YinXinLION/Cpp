/*************************************************************************
	> File Name: 3.17_1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 21时45分49秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<string> vec;
    for(string word; cin >> word; vec.push_back(word));
    for(auto &str : vec)
    for(auto &c : str)
    c = toupper(c);

    for(int i = 0; i != vec.size(); ++i)
    {
        if(i != 0 && i % 8 == 0)
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
