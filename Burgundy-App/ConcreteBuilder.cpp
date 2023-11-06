#include "ConcreteBuilder.h"

#include <cmath>

static int CalculateTotalSeats(double numCustomers) {
    if (numCustomers <= 4) {
        return 4;
    }
    double numTables = ceil(((numCustomers - 4) / 2) + 1); /// Calculate number of tables that need to be combined
    double totalSeats = (numTables * 2) + 2; /// Calculate total number of seats of combined tables

    return totalSeats;
}

ConcreteBuilder::ConcreteBuilder() :tables() {
    lastTableID = 0;
}

ConcreteBuilder::~ConcreteBuilder() {
//    delete table;
}

void ConcreteBuilder::buildPart(int numCustomers) {
    Table* table = new Table();
    table->setTableID(GenerateTableID());
    table->setNumCustomers(numCustomers);
    int totalSeats = CalculateTotalSeats(numCustomers);
    table->setAvailableSeats(totalSeats);
    Customer** custArray = new Customer*[totalSeats];

    std::cout << "table with ID: " << table->getTableID() << " is now occupied, with "<<table->getNumCustomers()<<" Customers" <<std::endl ;// << std::endl;

    Order* order = new Order(table->getNumCustomers(), table->getTableID());
    table->createOrder(order);

    // Fill seats with customers
    for (int i = 0; i < numCustomers; i++) {
        custArray[i] = new Customer("Customer " + std::to_string(i + 1));
    }
    // Set remaining open seats to nullptr
    for (int i = numCustomers; i < totalSeats; i++) {
        custArray[i] = nullptr;
    }

    table->setCustomers(custArray);
    tables.push_back(table);
}

Table *ConcreteBuilder::getResult() {
//    return table;
return nullptr;
}

int ConcreteBuilder::GenerateTableID() {
    return ++lastTableID;
}

Table* ConcreteBuilder::getTableWithID(int tableID) {
    for (Table* table : tables) {
        if (table->getTableID() == tableID) {
            return table;
        }
    }
    return nullptr;
}

std::vector<Table *> ConcreteBuilder::getTables() {
    return tables;
}



