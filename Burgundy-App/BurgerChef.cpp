#include "BurgerChef.h"

Chef* BurgerChef::getNext() {
	return Chef::getNext();
}

void BurgerChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void BurgerChef::addOrderItem(string item) {
	cout<<"Building Burger"<<endl;
	//create a burger given ingredients
	BurgerIngred *burger;
	burger =new Patty();
	burger->addIngredient(new Lettuce());


	Chef::addOrderItem(item);
}
