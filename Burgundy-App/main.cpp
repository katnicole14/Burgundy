#include "Table.h"
#include "TableState.h"
#include "Unoccupied.h"
#include "Occupied.h"
#include "BillPaid.h"
#include "Dirty.h"
#include <iostream>
//main to test state and strategy
int main(){
    //create a table 
   Table *table = new Table();

    table->getState();
   table->changeState();
   table->changeState();
table->changeState();
    return 0;
}
