#include "Ingredient.h"
Ingredient::Ingredient()
{

}
Ingredient::Ingredient(Burger *burger)
{
    Ingredients=burger;
}

void Ingredient::addIngredient(Burger* ingred) {
	cout << "Adding burger ingredients" << endl;
        if (Ingredients== 0){
            Ingredients = ingred;
        } else {
            Ingredients->addIngredient(ingred);
        }
}
Ingredient::~Ingredient() {
	//delete Ingredients;
}
