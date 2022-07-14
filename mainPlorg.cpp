//
// Created by »ªË¶ on 14/7/2022.
//
#include "Plorg.h"
#include <iostream>

int main()
{
    Plorg *p1 = new Plorg;
    Plorg *p2 = new Plorg("Tom");

    p1->show();
    p2->show();

    p1->setCI(40);
    p2->setCI(60);
    std::cout<<"After set CI:"<<std::endl;

    p1->show();
    p2->show();

    return 0;

}