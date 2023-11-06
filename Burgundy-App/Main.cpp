#include "Table.h"
#include "TableState.h"
#include "Unoccupied.h"
#include "Occupied.h"
#include "BillPaid.h"
#include "Dirty.h"
#include "Order.h"
#include "Memento.h"
#include "Caretaker.h"
#include "ConcreteBuilder.h"
#include "Manager.h"
#include "Waiter.h"
#include "HeadChef.h"
#include "Chef.h"
#include "BurgerChef.h"
#include "FriesChef.h"
#include "SauceChef.h"
#include "DrinksChef.h"
#include "BurgandyRestaurant.h"
#include <iostream>
#include <vector>  
void testMemento();
int* generateOrder();
void testBuilder();
void testMediator();
void testObserver();
void testOrders();
void testAll();


int main(){
testAll();
//     std::cout << "======================= MEMENTO =======================\n";
//     testMemento();
//     std::cout <<std::endl;

//     std::cout << "======================= BUILDER  =======================\n";

//    testBuilder();
   
// testObserver();
// testOrders(); 
    //create a table 


//     table->getState();
//    table->changeState();
//    table->changeState();
// table->changeState();

// std::cout <<std::endl <<std::endl;


//===============================================
//CUSTOMERS SETTING ORDERS
//===============================================
// int* order0 = new int[8] {1, 1, 1, 1, 0, 0, 0, 2};
// int* order1 = new int[8] {1, 1, 1, 1, 0, 0, 0, 1};
// int* order2 = new int[8] {1, 1, 1, 1, 0, 0, 0, 2};
// int* order3 = new int[8] {1, 1, 0, 1, 1, 1, 1, 3};
// int* order4 = new int[8] {1, 1, 1, 1, 0, 0, 0, 1};

// Order* newOrderObject = new Order(5,1);

// std::cout << "Setting Customer 0 Order" << std::endl;
// newOrderObject->setCustomerOrder(0,order0);
// newOrderObject->;

// std::cout << "Setting Customer 1 Order" << std::endl;
// newOrderObject->setCustomerOrder(1,order1);
// newOrderObject->printOrderArray();

// std::cout << "Setting Customer 2 Order" << std::endl;
// newOrderObject->setCustomerOrder(2,order2);
// newOrderObject->printOrderArray();

// std::cout << "Setting Customer 3 Order" << std::endl;
// newOrderObject->setCustomerOrder(3,order3);
// newOrderObject->printOrderArray();

// std::cout << "Setting Customer 4 Order" << std::endl;
// newOrderObject->setCustomerOrder(4,order4);
// newOrderObject->printOrderArray();

//===============================================
//END OF CUSTOMERS SETTING ORDERS
//===============================================
    







    
//==========================================================
// FLOOR STAFF OBSERVING RESTAURANT
//==========================================================

//create restaurant

// BurgandyRestaurant* burgundy = new BurgandyRestaurant();

//create Manager HeadChef and 2 Waiters
/* FloorStaff* managerA = new Manager();
FloorStaff* headChefA = new HeadChef(); */

// Manager* managerA = new Manager();
// HeadChef* headChefA = new HeadChef();

//create tables for waiters


//create a vector of tables




//Waiter(std::string waiterName, Table* table, HeadChef* headChef);

//create waiters
// Waiter* waiterA = new Waiter("waiterA" , tableList[0], headChefA);
// Waiter* waiterB = new Waiter("waiterB" , tableList[1], headChefA);

//Attach Observsers to Restaurant
// burgundy->attachObserver(managerA);
// burgundy->attachObserver(headChefA);
// burgundy->attachObserver(waiterA);
// burgundy->attachObserver(waiterB);

//void attachObserver(FloorStaff* staffMember);
//void remove(FloorStaff* staffMember);

// burgundy->notify(tableList);


//==========================================================
// END OF FLOOR STAFF OBSERVING RESTAURANT
//==========================================================

    return 0;
}

void testOrders(){

    std::cout<<"========================Orders================================"<<std::endl;
    Order *order = new Order(5,5);
Chef* handlerChain = new BurgerChef(new FriesChef(new SauceChef(new DrinksChef())));

 std::cout<<"start the chain "<<std::endl;
handlerChain->addOrderItem(order);
std::cout<<"chain done"<<std::endl;
delete handlerChain;
delete order;
std::cout<<"end chain"<<std::endl;
}

void testObserver(){
    std::vector<Table*> tableList;
tableList.push_back( new Table() );
tableList[0]->setTableSatisfaction(true);
tableList[0]->setTableID(0);

tableList.push_back( new Table() );
tableList[1]->setTableSatisfaction(false);
tableList[1]->setTableID(1);
}

void testBuilder(){

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

    std::cout << "\nTable " << table1ID << " (5 customers):\n";
    for (int i = 0; i < table1AvailableSeats; i++) {
        if (table1Customers[i] != nullptr) {
            std::cout << table1Customers[i]->getCustomerName() << std::endl;
        } else {
            std::cout << "Open seat " << i + 1 << std::endl;
        }
    }
    std::cout<<std::endl;
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

    std::cout << "\nTable " << table2ID << " (7 customers):\n";
    for (int i = 0; i < table2AvailableSeats; i++) {
        if (table2Customers[i] != nullptr) {
            std::cout << table2Customers[i]->getCustomerName() << std::endl;
        } else {
            std::cout << "Open seat " << i + 1 << std::endl;
        }
    }
    std::cout<<std::endl;

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

    std::cout << "\nTable " << table3ID << " (1 customer):\n";
    for (int i = 0; i < table3AvailableSeats; i++) {
        if (table3Customers[i] != nullptr) {
            std::cout << table3Customers[i]->getCustomerName() << std::endl;
        } else {
            std::cout << "Open seat " << i + 1 << std::endl;
        }
    }
    std::cout<<std::endl;

  std::cout << "\n======================= MEDIATOR =======================\n"; 
    
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

    std::cout<<std::endl;

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
    
}
void testMemento(){
    ///initialize variables
    Order order(5, 3);
    Memento* memento;
    Caretaker ct;

    ///Show current state of the orderArray
    std::cout<< "Initial State" << std::endl;
    order.printOrderArray();
    std::cout <<std::endl;
    ///Save state of orderArray
    memento = order.makeMemento();
    ct.storeMemento(memento);

    ///Mutate orderArray
    int* customOrder = generateOrder();
    order.setCustomerOrder(3, customOrder);
    std::cout<<std::endl;
    ///Show state of the orderArray
    std::cout<< "State after change"<< std::endl;
    order.printOrderArray();

    ///Restore state of the orderArray
   // Memento* redo = ct.getMemento();
    order.setMemento(ct.getMemento());
    

    ///Show state of the orderArray
    std::cout<< "State after change"<< std::endl;
    order.printOrderArray();





}

int* generateOrder() {
    int* tmp = new int[8];
    for (int i = 0; i < 8; i++) {
        tmp[i] = i;  
    }

    return tmp;
}
void testAll(){
    ConcreteBuilder builder;
    Manager manager(&builder);
    int numCustomers= 7;

    // Test case 1: A group of 7 customers
     manager.construct(numCustomers);
//    Table* table1 = builder.getResult();
    Table* table1 = builder.getTableWithID(1);
    int table1ID = table1->getTableID();
    Customer** table1Customers = table1->getCustomers();
    int table1AvailableSeats = table1->getAvailableSeats();

    std::cout << "\nTable " << table1ID << " ("<<numCustomers<<" customers):\n";
    for (int i = 0; i < table1AvailableSeats; i++) {
        if (table1Customers[i] != nullptr) {
            std::cout << table1Customers[i]->getCustomerName() << std::endl;
        } else {
            std::cout << "Open seat " << i + 1 << std::endl;
        }
    }
    std::cout<<std::endl;

    HeadChef chef;
    Waiter *waiter = new Waiter("Waiter 1", table1, &chef);


    int order1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int order2[8] = {3, 2, 6, 1, 6, 6, 4, 6};
    int order3[8] = {1, 3, 5, 4, 7, 8, 7, 1};
    int order4[8] = {1, 2, 3, 4, 5, 6, 7, 9};
    int order5[8] = {3, 2, 6, 1, 6, 6, 4, 0};
    int order6[8] = {1, 3, 5, 4, 7, 8, 7, 4};
    int order7[8] = {1, 2, 7, 4, 5, 6, 7, 2};

    table1Customers[0]->setOrder(order1);
    table1Customers[1]->setOrder(order2);
    table1Customers[2]->setOrder(order3);
    table1Customers[3]->setOrder(order4);
    table1Customers[4]->setOrder(order5);
    table1Customers[5]->setOrder(order6);
    table1Customers[6]->setOrder(order7);
 
 std::cout<<"======================Iterator testing ==========="<<std::endl;
    for (int i = 0; i < 7; i++) {
    table1Customers[i]->setAmount(100);
}
std::cout<<table1->getBill() <<std::endl;
waiter->setTip(10);
std:: cout <<waiter->getTip()<<std::endl;


std::cout <<"====================end of iterator ============="<<std::endl;
    std::cout <<std::endl;
    table1->placeOrders();
    std::cout <<std::endl;
    waiter->deliverOrder();
     std::cout <<std::endl;
    waiter->deliverMeal();
  

  std::cout << "====================OBSERVER=================="<<std::endl;;
   BurgandyRestaurant* burgundy = new BurgandyRestaurant();

//create Manager HeadChef and 2 Waiters
 

Manager* managerA = &manager;
HeadChef* headChefA = &chef;
Waiter* w = waiter ;
std::vector<Table*> tablelist;
tablelist.push_back(table1);

//Attach Observsers to Restaurant
burgundy->attachObserver(managerA);
burgundy->attachObserver(headChefA);
burgundy->attachObserver(w);
burgundy->notify(tablelist);



}