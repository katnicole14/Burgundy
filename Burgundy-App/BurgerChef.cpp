<<<<<<< HEAD

=======
#include "BurgerChef.h"
>>>>>>> 6fc23565e596f86b45f8e55350918a5452e830d1

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
