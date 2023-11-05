#ifndef MANAGER_H
#define MANAGER_H
#include <vector>
#include "FloorStaff.h"
#include "Table.h"

#include "AbstractBuilder.h"

class Manager : public FloorStaff {
private:
    AbstractBuilder* builder;

public:
    Manager(AbstractBuilder* b) : builder(b) {}
    void construct(int numCustomers);
    void observeSatisfaction(std::vector<Table*>& tables);
};


#endif
