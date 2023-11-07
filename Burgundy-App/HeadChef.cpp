#include "HeadChef.h"

HeadChef::HeadChef() {

}

HeadChef::~HeadChef() {

}

void HeadChef::receiveOrder(Order *order) {
    this->setOrder(order);
    std::cout << "Head Chef has received the order: " << std::endl;

    std::cout << "Num customers: " << order->getNumCustomers() << std::endl;
    std::cout << "Table ID: " << order->getTableID() << std::endl;
       std::vector<std::string> menuItems = {
        "Bun",
        "Pickle",
        "Lettuce",
        "Patty",
        "Tomato",
        "Fries",
        "Sauce",
        "Drink"
    };
    int ***orders = order->getOrderArray();
    for (int i = 0; i < order->getNumCustomers(); ++i) {
        std::cout << "Customer " << i+1 << ": ";
        for (int j = 0; j < 8; ++j) {
            if(*orders[i][j] == 1)
              std::cout <<menuItems[j]<<" ";
        }
        std::cout << std::endl;
    }

    Chef* handlerChain = new BurgerChef(new FriesChef(new SauceChef(new DrinksChef())));

    std::cout<<"start the chain "<<std::endl;
    handlerChain->addOrderItem(order);
    std::cout<<"chain done"<<std::endl <<std::endl;
    delete handlerChain;
    // delete order;
}

Order* HeadChef::sendOutFinishedMeal() {
    return order;
}

void HeadChef::placeOrders() {
    // do nothing
}

void HeadChef::receiveFinishedMeal(Order* order) {
    // do nothing
}

void HeadChef::setOrder(Order *order) {
    this->order = order;
}

Order* HeadChef::getOrder() {
    return order;
}

void HeadChef::observeSatisfaction(std::vector<Table*>& tables){
	//Please implement
}
