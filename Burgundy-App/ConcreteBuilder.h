#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

class ConcreteBuilder : AbstractBuilder {


public:
	Table* getResult();

	void buildPart();
};

#endif
