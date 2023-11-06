#ifndef TOMATO_H
#define TOMATO_H
#include"Ingredient.h"
/**
 * \class Tomato
 * \brief The Tomato class adds responsibilities to the core component Bun.
 */
class Tomato :public  Ingredient {
    public:
    /**
     	* \brief Tomato constructor  
     	*/
    Tomato();
    /**
     	* \brief Tomato desstructor  
     	*/
    virtual ~Tomato();
};

#endif
