#ifndef TOMATO_H
#define TOMATO_H
#include"Ingredient.h"

class Tomato :public  Ingredient {
    public:
     const float price = 1.64;
    Tomato();
    virtual ~Tomato();
};

#endif
