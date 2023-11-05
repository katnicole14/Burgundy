#ifndef WAITER_H
#define WAITER_H

#include "FloorStaff.h"
#include "Table.h"
#include "HeadChef.h"

#include <string>

class Waiter : public FloorStaff {
private:
    std::string waiterName;
    Table* table;
    HeadChef* headChef;

public:
    Waiter(std::string waiterName, Table* table, HeadChef* headChef);
    ~Waiter();
    void setWaiterName(std::string waiterName);
    std::string getWaiterName();
    void setTable(Table* table);
    void setHeadChef(HeadChef* headChef);
    void deliverOrder();
    void deliverMeal();
};


#endif
