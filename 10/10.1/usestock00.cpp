/*************************************************************************
    > File Name: usestock00.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: Sat 06 Jan 2018 04:17:15 PM CST
 ************************************************************************/

#include<iostream>
#include"stock00.h"

//using namespace std;
int main()
{
    Stock banana;
    banana.acquire("AppleStock", 100, 50);
    banana.show();

    return 0;
}
