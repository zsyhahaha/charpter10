//
// Created by »ªË¶ on 14/7/2022.
//

#include "Plorg.h"
#include <cstring>
#include <iostream>

using namespace std;

Plorg::Plorg()
{
    int c;
    strcpy(name,"Plorga");
    cout<<"Input CI :"<<endl;
    cin>>c;
    CI = c;
}

Plorg::Plorg(const char * name)
{
    strcpy(this->name,name);
    CI = 50;
}

void Plorg::setCI(int C)
{
    CI = C;
}

void Plorg::show()
{
    cout<<"Name of Plorg :"<<name<<endl;
    cout<<"CI of Plorg :"<<CI<<endl;
}