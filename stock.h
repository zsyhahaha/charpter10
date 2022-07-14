//
// Created by »ªË¶ on 14/7/2022.
//

#ifndef CHARPTER10_STOCK_H
#define CHARPTER10_STOCK_H

#include <string>

class Stock {
public:
    Stock();
    Stock(const std::string & co ,long n = 0,double pr = 0);
    ~Stock();
    //void acquire(const std::string & co ,long n ,double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot()
    {
        total_val = shares * share_val;
    }
};


#endif //CHARPTER10_STOCK_H
