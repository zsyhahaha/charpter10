//
// Created by »ªË¶ on 14/7/2022.
//

#ifndef CHARPTER10_LIST_H
#define CHARPTER10_LIST_H

typedef int Item;

class List
{
private:
    static const int MAX = 10;
    Item items[MAX];
    int index;
public:
    List();
    void add_data(Item item);
    bool is_empty();
    bool is_full();
    void visit(void (*pf)(Item &));
};


#endif //CHARPTER10_LIST_H
