<<<<<<< HEAD
=======
#include "Ingredient.h"
>>>>>>> 6fc23565e596f86b45f8e55350918a5452e830d1

void Ingredient::addIngredient(BurgerIngred* ingred) {
	cout << "Adding burger ingredients" << endl;
        if (Ingredients== 0){
            Ingredients = ingred;
        } else {
            Ingredients->addIngredient(ingred);
        }
}
Ingredient::~Ingredient() {
	delete Ingredients;
}
