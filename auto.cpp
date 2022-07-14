//
// Created by »ªË¶ on 13/7/2022.
//

#include "auto.h"
#include <iostream>

using namespace std;

void oil(int x)
{
    int texas = 5;
    cout<<"in oil() , texas ="<<texas<<" "<<"&texas = "<<&texas<<endl;
    cout<<"in oil() , x = "<<x<<" "<<"&x = "<<&x<<endl;
    {
        int texas = 112;
        cout<<"in block() , texas ="<<texas<<" "<<"&texas = "<<&texas<<endl;
        cout<<"in block() , x = "<<x<<" "<<"&x = "<<&x<<endl;
    }
    cout<<"Post-block , texas ="<<texas<<" "<<"&texas = "<<&texas<<endl;
}