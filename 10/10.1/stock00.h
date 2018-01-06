/*************************************************************************
    > File Name: stock00.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: Sat 06 Jan 2018 01:09:50 PM CST
 ************************************************************************/
#ifndef STOCK_H_
#define STOCK_H_

#include<string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;}

public:
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif
