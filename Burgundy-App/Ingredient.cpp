#include "Ingredient.h"
#include<string>
#include<iostream>

Ingredient::Ingredient(){

}

Ingredient::Ingredient(Burger *burger) {
    Ingredients=burger;
}

void Ingredient::addIngredient(Burger* ingred) {
	std::cout << "Adding burger ingredients" << std::endl;
        if (Ingredients== 0){
            Ingredients = ingred;
        } else {
            Ingredients->addIngredient(ingred);
        }
}

Ingredient::~Ingredient() {
	//delete Ingredients;
}
