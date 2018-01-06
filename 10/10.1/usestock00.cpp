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
    banana.acquire("NanoSmart", 20, 12.50);
    banana.show();
    banana.buy(15, 18.125);
    banana.show();
    banana.sell(400, 20.00);
    banana.show();
    banana.buy(300000,40.125);
    banana.show();
    banana.sell(300000,0.125);
    banana.show();
    return 0;
}
