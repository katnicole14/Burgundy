#include "Manager.h"


void Manager::construct(int numCustomers) {
    builder->buildPart(numCustomers);
}

void Manager::observeSatisfaction(std::vector<Table*>& tables) {
 	int numTables = tables.size();

    this->observerState = true;
  // run for loop from 0 to vecSize
  for( int i = 0; i < numTables; i++)
  {
        if (!tables[i]->getTableSatisfaction()) {
            this->observerState = false;
        }
    }

    if (this->observerState) {
        std::cout << "Manager Observer Result: Restaurant is satisfied" <<std::endl;}
    else {
        std::cout << "Manager Observer Result: Restaurant is not satisfied" <<std::endl;
    }

}
