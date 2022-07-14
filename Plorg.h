//
// Created by »ªË¶ on 14/7/2022.
//

#ifndef CHARPTER10_PLORG_H
#define CHARPTER10_PLORG_H


class Plorg {
private:
    char name[19];
    int CI;
public:
    Plorg();
    Plorg(const char * name);
    void setCI(int C);
    void show();
};


#endif //CHARPTER10_PLORG_H
