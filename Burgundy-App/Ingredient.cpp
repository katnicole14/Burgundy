#include "Ingredient.h"

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
