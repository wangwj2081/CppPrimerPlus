//usestock01.cpp -- using the Stock class
//compile with stock01.cpp
#include<iostream>
#include"stock01.h"

//using namespace std;
int main()
{
    using std::cout;
    cout << "Using constructors to create new objects.\n";
    Stock banana;
    banana.show();
    
    Stock stock1("aaa", 12, 20.0);
    stock1.show();

    Stock stock2 = Stock("bbb", 5, 2.0);
    stock2.show();

    cout << "copy  stock1 to stock2 \n";
    stock2 = stock1;
    cout << "List stock1 and stock2 \n";
    stock1.show();
    stock2.show();

    cout << "using Stock() to reset object \n";
    stock1 = Stock("Baidu", 20, 50.0);  // temp object
    cout << "Revised stock1 \n";
    stock1.show();
    cout << "test Done \n";

    return 0;

}
