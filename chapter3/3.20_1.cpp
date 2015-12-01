/*************************************************************************
	> File Name: 3.20_1.cpp
	> Author:YinXin 
	> Mail:yinxin19950816@gmail.com 
	> Created Time: 2015年12月01日 星期二 22时10分04秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> ivec;
    for(int i = 0; i < 4 ; i++)
    {
        int num;
        cin >> num;
        ivec.push_back(num);
    }
    if(ivec.empty())
    {
        cout << "input at least one integer." << endl;
        return -1;
    }

    auto size = ivec.size();
    if(size %2 != 0)
    size = size + 1;
    else 
    size /= 2;

    for(int i = 0; i != size ; ++i)
    cout << ivec[i] + ivec[ivec.size() - i -1 ] << " ";
    cout << endl;
    return 0;
}
