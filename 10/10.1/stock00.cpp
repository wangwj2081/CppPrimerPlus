/*************************************************************************
    > File Name: stock00.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: Sat 06 Jan 2018 03:53:57 PM CST
 ************************************************************************/

#include<iostream>
#include"stock00.h" 
//using namespace std;


void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if(n<0)
    {
        std::cout<<"number of share can not be negative; "
            << company << "shares set to be 0. \n";
        shares = 0;
    }
    else
    {
        shares = n;
        share_val = pr;
    }
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout<<"num of shares purchased can't be negative. "
            <<"So exit\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if(num < 0)
    {
        std::cout<<"num of shares sold can't be negative."
            <<"so exit.\n";
    }
    else if(num > shares)
    {
        std::cout<<"You can not sell more than you have."
            <<"So exit.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout << "company:"<<company <<", stock num:"<<shares <<"\n"
        <<"share_val:"<<share_val<<", total money:"<<total_val<<'\n';
        
}
