#include "Table.h"
#include "TableState.h"
#include "Unoccupied.h"
#include "Occupied.h"
#include "BillPaid.h"
#include "Dirty.h"
#include "Order.h"
#include "Memento.h
#include "Caretaker.h"
#include "ConcreteBuilder.h"
#include "Manager.h"
#include "Waiter.h"

#include <iostream>

void testMemento();
int* generateOrder();

using namespace std;

//main to test state and strategy
int main(){
    //======================= MEMENTO ==========================//
    cout << "======================= MEMENTO =======================\n";
    testMemento();
    // ======================= BUILDER =======================

    cout << "======================= BUILDER =======================\n";

    ConcreteBuilder builder;
    Manager manager(&builder);
//    Manager* manager = new Manager(&builder1);

    // Test case 1: A group of 5 customers
    manager.construct(5);
//    Table* table1 = builder.getResult();
    Table* table1 = builder.getTableWithID(1);
    int table1ID = table1->getTableID();
    Customer** table1Customers = table1->getCustomers();
    int table1AvailableSeats = table1->getAvailableSeats();

    cout << "\nTable " << table1ID << " (5 customers):\n";
    for (int i = 0; i < table1AvailableSeats; i++) {
        if (table1Customers[i] != nullptr) {
            cout << table1Customers[i]->getCustomerName() << endl;
        } else {
            cout << "Open seat " << i + 1 << endl;
        }
    }
    cout<<endl;

//    ConcreteBuilder builder2;
//    Manager manager(&builder2);
//    manager = new Manager(&builder2);

    // Test case 2: A group of 7 customers
    manager.construct(7);
//    Table* table2 = builder.getResult();
    Table* table2 = builder.getTableWithID(2);
    int table2ID = table2->getTableID();
    Customer** table2Customers = table2->getCustomers();
    int table2AvailableSeats = table2->getAvailableSeats();

    cout << "\nTable " << table2ID << " (7 customers):\n";
    for (int i = 0; i < table2AvailableSeats; i++) {
        if (table2Customers[i] != nullptr) {
            cout << table2Customers[i]->getCustomerName() << endl;
        } else {
            cout << "Open seat " << i + 1 << endl;
        }
    }
    cout<<endl;

//    ConcreteBuilder builder3;
//    Manager manager(&builder);
//    manager = new Manager(&builder3);

    // Test case 3: A single customer
    manager.construct(1);
//    Table* table3 = builder.getResult();
    Table* table3 = builder.getTableWithID(3);
    int table3ID = table3->getTableID();
    Customer** table3Customers = table3->getCustomers();
    int table3AvailableSeats = table3->getAvailableSeats();

    cout << "\nTable " << table3ID << " (1 customer):\n";
    for (int i = 0; i < table3AvailableSeats; i++) {
        if (table3Customers[i] != nullptr) {
            cout << table3Customers[i]->getCustomerName() << endl;
        } else {
            cout << "Open seat " << i + 1 << endl;
        }
    }
    cout<<endl;


    // ======================= MEDIATOR =======================

    cout << "\n======================= MEDIATOR =======================\n";

    HeadChef chef;
    Waiter *waiter = new Waiter("Waiter 1", table2, &chef);


    int order1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int order2[8] = {3, 2, 6, 1, 6, 6, 4, 6};
    int order3[8] = {1, 3, 5, 4, 7, 8, 7, 1};
    int order4[8] = {1, 2, 3, 4, 5, 6, 7, 9};
    int order5[8] = {3, 2, 6, 1, 6, 6, 4, 0};
    int order6[8] = {1, 3, 5, 4, 7, 8, 7, 4};
    int order7[8] = {1, 2, 7, 4, 5, 6, 7, 2};

    table2Customers[0]->setOrder(order1);
    table2Customers[1]->setOrder(order2);
    table2Customers[2]->setOrder(order3);
    table2Customers[3]->setOrder(order4);
    table2Customers[4]->setOrder(order5);
    table2Customers[5]->setOrder(order6);
    table2Customers[6]->setOrder(order7);

    table2->placeOrders();
    waiter->deliverOrder();
    waiter->deliverMeal();

    std::cout<<endl;

    Waiter* waiter2 = new Waiter("Waiter 2", table1, &chef);
    int order8[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int order9[8] = {3, 2, 6, 1, 6, 6, 4, 6};
    int order10[8] = {1, 3, 5, 4, 7, 8, 7, 1};
    int order11[8] = {1, 2, 3, 4, 5, 6, 7, 9};
    int order12[8] = {3, 2, 6, 1, 6, 6, 4, 0};

    table1Customers[0]->setOrder(order8);
    table1Customers[1]->setOrder(order9);
    table1Customers[2]->setOrder(order10);
    table1Customers[3]->setOrder(order11);
    table1Customers[4]->setOrder(order12);

    table1->placeOrders();
    waiter2->deliverOrder();
    waiter2->deliverMeal();
    
    
    
    
    
    //create a table 
   Table *table = new Table(5);

    table->getState();
   table->changeState();
   table->changeState();
table->changeState();

cout <<endl <<endl;


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
    
Order *order = new Order(5);
Chef* handlerChain = new BurgerChef(new FriesChef(new SauceChef(new DrinksChef())));

 cout<<"start the chain "<<endl;
handlerChain->addOrderItem(order);
cout<<"chain done"<<endl;
delete handlerChain;
delete order;
cout<<"end chain"<<endl;
    return 0;
}

void testMemento(){
    ///initialize variables
    Order order(5, 3);
    Memento* memento;
    Caretaker ct;

    ///Show current state of the orderArray
    cout<< "Initial State" << endl;
    order.printOrderArray();

    ///Save state of orderArray
    memento = order.makeMemento();
    ct.storeMemento(memento);

    ///Mutate orderArray
    int* customOrder = generateOrder();
    order.setCustomerOrder(3, customOrder);

    ///Show state of the orderArray
    cout<< "State after change"<< endl;
    order.printOrderArray();

    ///Restore state of the orderArray
    Memento* redo = ct.getMemento();
    order.setMemento(ct.getMemento());
    

    ///Show state of the orderArray
    cout<< "State after change"<< endl;
    order.printOrderArray();

    return 0;
}

int* generateOrder(){
    int* tmp = new int[8];

    for(int i = 0; i < 8; i++){
        tmp = int(i);
    }

    return tmp;
}
