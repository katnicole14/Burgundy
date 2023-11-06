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
#include "Payment.h"
#include "Tab.h"
#include "SplitBlill.h"
#include "OneBill.h"
#include <iostream>
#include <vector>  

//================================final test================================

  void CustomerService();
  void KitchenView();
//--------------------------------------------------------------------------
int main(){
    HeadChef chef;
    std::vector<Waiter*> waiters;
    ConcreteBuilder builder;
    Manager managers(&builder);
    BurgandyRestaurant* burgundy = new BurgandyRestaurant();
    std::vector<Table*> tablelist;
    Customer** tableCustomers;
    Waiter* waiter;
    Table* table;
   
    float prices[8] = {2, 0.78, 1.75, 20, 1.64, 25, 0, 22.50};

    
    std::vector<std::string> menuItems = {
                                            "Bun",
                                            "Pickle",
                                            "Lettuce",
                                            "Patty",
                                            "Tomato",
                                            "Fries",
                                            "Sauce",
                                            "Drink" };


    std::cout << "============================================================" << std::endl;
    std::cout << "WELCOME TO BURGANDY RESTAURANT" << std::endl;
    std::cout << "============================================================" << std::endl;
    do{
    
        std::cout << "Switch To:" << std::endl;
        std::cout << "1. MANAGER" << std::endl;
        std::cout << "2. Customers" << std::endl;
        std::cout << "3. Waiter" << std::endl;
        std::cout << "4. Close Restaurant" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "You selected MANAGER." << std::endl;
                std::cout << "1. Observe table" << std::endl;
                std::cout << "2. New customers need a table" << std::endl;

                int managerChoice;
                std::cout << "Enter your choice: ";
                std::cin >> managerChoice;

                switch (managerChoice) {
                    case 1:
                        std::cout << "Manager: Observing tables." << std::endl;
                        burgundy->attachObserver(&managers);
                        burgundy->attachObserver(&chef);
                        // burgundy->attachObserver(waiters);
                        burgundy->notify(tablelist);
                        break;
                    case 2:
                        std::cout << "Manager: Assigning a table to new customers." << std::endl;
                        std::cout <<"Enter number of customer: ";
                        int customers;
                        std::cin >>customers;
                                
                        managers.construct(customers);
                        table = builder.getTables()[builder.getTables().size()-1] ;
                        tablelist.push_back(table);
                        waiter = new Waiter("Waiter", table, &chef);
                        waiters.push_back(waiter);
                        
                        std::cout <<"Manager assigning a waiter to a customer"<<std::endl;
                        tableCustomers = table->getCustomers();
                        // Table* table1 = builder.getTableWithID(1);
                        // int table1ID = table1->getTableID();
                    
                        // int table1AvailableSeats = table1->getAvailableSeats();              
                    default:
                        std::cout << "Invalid choice for the Manager." << std::endl;
                }
            break;

            case 2:
                std::cout << "You selected Customers." << std::endl;
                std::cout << "1. Ready to pay" << std::endl;
                std::cout << "2. Satisfaction" << std::endl;
                std::cout << "3. Make an order" << std::endl;

                int customerChoice;
                std::cout << "Enter your choice: ";
                std::cin >> customerChoice;
                int tableChoice;
                std::cout << "Enter table Id: " ;
                std::cin>>tableChoice ;
                Table * table1;
                switch (customerChoice) {
                    case 1:
                        std::cout << "Customer: Ready to pay." << std::endl;
                        std::cout << "Total amount: R " << table1->getBill() << std::endl;
                        std::cout << "Payment option." << std::endl;
                        std::cout << "1.Settle Tab Later." << std::endl;
                        std::cout << "2.One Bill." << std::endl;
                        std::cout << "3.Split bill." << std::endl;
                        //===============================================
                        int tip;
                        int payment;
                        std::cout << "Enter your choice: ";
                        std::cin >> payment;

                        switch (payment) {
                            case 1:
                                std::cout << "Settle Tab later" << std::endl;
                            
                                table1->setPayment(new Tab());
                                  table1->settleBill();
                                std::cout << "Enter waiter Tip percentage :" << std::endl;
                                
                                std::cin>>tip ;
                                table1->changeState();
                                table1->changeState();
                                table1->changeState();
                                
                            break;
                            case 2:
                                std::cout << "ONE BILL." << std::endl;
                                table1=  builder.getTableWithID(tableChoice);
                                table1->setPayment(new OneBill());
                                table1->settleBill();
                                table1->changeState();
                                table1->changeState();
                                table1->changeState();
                                std::cin>>tip ;
                            break;
                            case 3: 
                                table1=  builder.getTableWithID(tableChoice);
                                table1->setPayment(new SplitBlill());
                                table1->settleBill();
                                table1->changeState();
                                table1->changeState();
                                table1->changeState();
                                int tip;
                                std::cin>>tip ;
                            break;
                            default:
                                std::cout << "Invalid choice for PAYMENT." << std::endl;
                                break;
                        }
                    break;    
                    
                    case 2:
                        std::cout << "Customer: Expressing satisfaction." << std::endl;
                        std::cout << "Customer: Expressing satisfaction." << std::endl;
                        std::cout<< "ARE YOU SATISFIED WITH THE SERVICE AND FOOD ?"<<std::endl;
                        std::cout<< "1.Yes" << std::endl;
                        std::cout<< "2.No" << std::endl;
                        std::cin >> choice;
                        switch (choice){
                            case 1: 
                                table1->setTableSatisfaction(true);
                                break;
                              case 2: 
                                table1->setTableSatisfaction(false);
                                break;
                            default:
                                break;
                        }
                    break;
                    case 3:
                        std:: cout << "====================Menu========================="<<std::endl;
                        for (int k = 0; k < table->getNumCustomers(); k++){
                            std::cout <<"CUSTOMER " << k+1 <<std::endl;
                            std::vector<int> userChoices(menuItems.size(), 0); // Initialize choices with 0 for "no"
                            userChoices[0] = 1; // Set the bun to "yes" by default
                        
                            tableCustomers[k]->setAmount(prices[0]);
                            // Display the menu and prompt the user for choices
                            int size =menuItems.size();
                            for (int i = 1; i < size; i++) {
                                std::cout << "Do you want " << menuItems[i] << "? (1 for yes, 0 for no): ";
                                int choice;
                                std::cin >> choice;

                                if (choice == 0 || choice == 1) {
                                    userChoices[i] = choice;
                                    if(userChoices[i] == 1){
                                    tableCustomers[k]->setAmount(prices[i]);
                                    }
                                } else {
                                    std::cout << "Invalid choice. Please enter 1 for yes or 0 for no." << std::endl;
                                    i--; // Re-prompt for the same item
                                }
                            }

                            // Display the user's choices
                            std::cout << "Your choices are:" << std::endl;
                            for (int i = 0; i < size; i++) {
                                std::cout << menuItems[i] << ": " << (userChoices[i] ? "Yes" : "No") << std::endl;
                            }
                            int menuSize = userChoices.size();
                                int order[8];   
                            for (int i = 0; i < 8; i++) {
                                    if (i < menuSize) {
                                        order[i] = userChoices[i];
                                    }
                            }
                            tableCustomers[k]->setOrder(order);
                            std::cout <<"PRICE: R " << tableCustomers[k]->getTotalAmount()<<std::endl;

                        }

                        if(table->getCustomerOrders() != nullptr){
                            table->placeOrders();
                        }
                        else{
                            std::cout<< "Please Get a table by the manager please"<< std::xendl;
                            break;
                        }
                        std::cout <<std::endl;
                        std ::cout << "VIEW THE KITCHEN"<<std::endl; 
                        std ::cout << "1. YES"<<std::endl; 
                        std ::cout << "2. No"<<std::endl;
                        int choice ;
                        std::cout << "Enter your choice:";
                        std ::cin >>choice ;
                        std ::cout << std::endl;
                        
                        if(choice == 1){
                            waiter->deliverOrder();
                        }
                        waiter->deliverMeal();

                    break;
                    default:
                        std::cout << "Invalid choice for Customers." << std::endl;
                    break;
                }
            break;

            case 3:
                std::cout << "You selected Waiter." << std::endl;
                std::cout << "1.Waiters observing tables" << std::endl;

                int waiterChoice;
                std::cout << "Enter your choice: ";
                std::cin >> waiterChoice;

                switch (waiterChoice) {
                    case 1:
                        std::cout << "Waiter: Observing tables." << std::endl;
                        // burgundy->attachObserver(waiters);    
                    break;   
                    default:
                        std::cout << "Invalid choice for Waiter." << std::endl;
                    break;
                }
            break;

            case 4:
                // Close Restaurant
                // Implement any necessary cleanup code
                return 0;

            default:
                std::cout << "Invalid choice." << std::endl;
            break;
        }
    }while (true);
}
