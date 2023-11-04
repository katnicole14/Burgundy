#include"Chef.h"
#include"BurgerChef.h"
#include"FriesChef.h"
#include"SauceChef.h"
#include"DrinksChef.h"
#include"Order.h"

#include<string>
#include<iostream>
using namespace std;
int main() {
 // Create the chain of responsibility
    cout<<"start 1"<<endl;
     Order *order =new Order(5);
    
   
    cout<<"start 2"<<endl;
    
    Chef* handlerChain = new BurgerChef(new FriesChef(new SauceChef(new DrinksChef())));
    
    cout<<"start 3"<<endl;
    
    // Simulate a sequence of requests
    handlerChain->addOrderItem(order);
    handlerChain->addOrderItem(order);
    handlerChain->addOrderItem(order);
    handlerChain->addOrderItem(order);
    cout<<"chain done"<<endl;
    delete order;
    delete handlerChain;
     cout<<"end"<<endl;
    
    return 0;
}