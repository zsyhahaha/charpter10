//
// Created by »ªË¶ on 14/7/2022.
//

#ifndef CHARPTER10_STACK_H
#define CHARPTER10_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {MAX = 10};
    Item items [MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};


#endif //CHARPTER10_STACK_H
