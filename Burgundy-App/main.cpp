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




//===============================================
//CUSTOMERS SETTING ORDERS
//===============================================
int* order0 = new int[8] {1, 1, 1, 1, 0, 0, 0, 2};
int* order1 = new int[8] {1, 1, 1, 1, 0, 0, 0, 1};
int* order2 = new int[8] {1, 1, 1, 1, 0, 0, 0, 2};
int* order3 = new int[8] {1, 1, 0, 1, 1, 1, 1, 3};
int* order4 = new int[8] {1, 1, 1, 1, 0, 0, 0, 1};

Order* newOrderObject = new Order(5,1);

cout << "Setting Customer 0 Order" << endl;
newOrderObject->setCustomerOrder(0,order0);
newOrderObject->printOrderArray();

cout << "Setting Customer 1 Order" << endl;
newOrderObject->setCustomerOrder(1,order1);
newOrderObject->printOrderArray();

cout << "Setting Customer 2 Order" << endl;
newOrderObject->setCustomerOrder(2,order2);
newOrderObject->printOrderArray();

cout << "Setting Customer 3 Order" << endl;
newOrderObject->setCustomerOrder(3,order3);
newOrderObject->printOrderArray();

cout << "Setting Customer 4 Order" << endl;
newOrderObject->setCustomerOrder(4,order4);
newOrderObject->printOrderArray();

//===============================================
//END OF CUSTOMERS SETTING ORDERS
//===============================================
    return 0;
}
