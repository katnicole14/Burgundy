#ifndef MANAGER_H
#define MANAGER_H

#include "AbstractBuilder.h"

class Manager {
private:
    AbstractBuilder* builder;

public:
    Manager(AbstractBuilder* b) : builder(b) {}
    void construct(int numCustomers);
};


#endif
