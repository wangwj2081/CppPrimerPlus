//stock10.cpp -- Stock class declaration with constructors, destructor added
#include<iostream>
#include"stock01.h" 
//using namespace std;

// constructors (verbose versions)
Stock::Stock() //default constructor
{
    std::cout << "Default constructor called \n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called \n";
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

//class destructor
Stock::~Stock()
{
    std::cout << "Bye, " << company << "!\n";
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
    std::cout << "company:" << company  << ", stock num:" << shares << "\n"
        << "share_val:$" << share_val << " total money:$" << total_val << '\n';
        
}
