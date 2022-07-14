#include <iostream>
#include "stock.h"
//charpter10
// main.cpp stock.cpp stock.h
// stack.cpp stack.h stacker.cpp
//List.cpp List.h mainList.cpp
// Plorg.cpp Plorg.h mainPlorg.cpp
using namespace std;
void test01()
{
    Stock flucat;
    //flucat.acquire("NanoSmart",20,12.5);
    flucat.show();
    flucat.buy(5,18.125);
    flucat.show();
    flucat.sell(400,20.00);
    flucat.show();
    flucat.buy(300000,400.125);
    flucat.show();
    flucat.sell(200000,0.125);
    flucat.show();
}

void test02()
{
    cout<<"Using constructors to create new objects"<<endl;
    Stock stock1("NanoSmart",12,20.0);
    stock1.show();
    Stock stock2 = Stock("Boffo Objects",20,12.0);
    stock2.show();

    cout<<"Assigning stock1 to stock2"<<endl;
    stock2 = stock1;
    cout<<"Listening stock1 and stock2"<<endl;
    stock1.show();
    stock2.show();

    cout<<"Using a constructor to reset an object"<<endl;
    stock1 = Stock("Nifty",10,50.0);
    cout<<"Revised stock1:"<<endl;
    stock1.show();
    cout<<"Done"<<endl;
}

void test03()
{
    const int STKS = 4;

    Stock stocks[STKS] = {
            Stock("NanoSmart",12,20.0),
            Stock("BOffo Objects",200,2.0),
            Stock("Monolithic",130,3.25),
            Stock("Fleep Enterprises",60,6.5),
    };
    cout<<"Stock hodings:"<<endl;
    int st;
    for(st = 0;st < STKS ; st++)
    {
        stocks[st].show();
    }
    const Stock * top = &stocks[0];
    for(st = 1; st < STKS ; st++)
    {
        top = &top->topval(stocks[st]);
    }
    cout<<"\nMost valuable holding:"<<endl;
    top->show();
}
int main() {
    test03();
    return 0;
}
