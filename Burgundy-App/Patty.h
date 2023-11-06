#ifndef PATTY_H
#define PATTY_H
#include"Ingredient.h"
/**
 * \class Patty
 * \brief The Patty class adds responsibilities to the core component Bun.
 */
class Patty :public Ingredient {

public:
		Patty();
		virtual ~Patty();
};

#endif
