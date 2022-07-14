//
// Created by 华硕 on 14/7/2022.
//

#include "List.h"

List::List() {
    this->index = 0;
}

void List::add_data(Item item)
{
    this->items[index++] = item;
}

bool List::is_empty()
{
    return index == 0;
}

bool List::is_full()
{
    return index == MAX;
}

void List::visit(void (*pf)(Item &))//回调函数
{
    for (int i = 0; i < this->index; i++)
    {
        (*pf)(this->items[i]);
    }
}