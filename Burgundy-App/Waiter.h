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
    float tip ;

public:
    float getTip();
    void setTip(int value);
    Waiter(std::string waiterName, Table* table, HeadChef* headChef);
    ~Waiter();
    void observeSatisfaction(std::vector<Table*>& tables);
    void setWaiterName(std::string waiterName);
    std::string getWaiterName();
    void setTable(Table* table);
     Table * getTable();
    void setHeadChef(HeadChef* headChef);
    void deliverOrder();
    void deliverMeal();
};


#endif
