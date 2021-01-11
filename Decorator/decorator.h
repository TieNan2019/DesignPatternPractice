#ifndef _DECORATOR_H_
#define _DECORATOR_H_


const int milkCost = 3;
const int pearlCost = 4;
const int cheeseCost = 3;
const int shakeCost = 4;
const int iceCost = 0;
const int sugarCost = 2;
const int baseCost = 10;


class AbstractDecorator {
public:
	int cost;
	AbstractDecorator *object;

	int totalCost() {
		if (object)
			return object->totalCost() + cost;
		else
			return cost;
		
	}
};


class Milk: public AbstractDecorator {
public:
	Milk():Milk(nullptr) {}

	Milk(AbstractDecorator *object) {
		this->cost = milkCost;
		this->object = object;
	}

	~Milk() {
		if (object)
			delete object;
	}
};


class Cheese: public AbstractDecorator {
public:
	Cheese():Cheese(nullptr) {}

	Cheese(AbstractDecorator *object) {
		this->cost = cheeseCost;
		this->object = object;
	}

	~Cheese() {
		if (object)
			delete object;
	}
};


class Pearl: public AbstractDecorator {
public:
	Pearl():Pearl(nullptr) {}

	Pearl(AbstractDecorator *object) {
		this->cost = pearlCost;
		this->object = object;
	}

	~Pearl() {
		if (object)
			delete object;
	}
};



class Shake: public AbstractDecorator {
public:
	Shake():Shake(nullptr) {}

	Shake(AbstractDecorator *object) {
		this->cost = shakeCost;
		this->object = object;
	}

	~Shake() {
		if (object)
			delete object;
	}
};



class Sugar: public AbstractDecorator {
public:
	Sugar():Sugar(nullptr) {}

	Sugar(AbstractDecorator *object) {
		this->cost = sugarCost;
		this->object = object;
	}

	~Sugar() {
		if (object)
			delete object;
	}
};



class Ice: public AbstractDecorator {
public:
	Ice():Ice(nullptr) {}

	Ice(AbstractDecorator *object) {
		this->cost = iceCost;
		this->object = object;
	}

	~Ice() {
		if (object)
			delete object;
	}
};



class Base: public AbstractDecorator {
public:
	Base():Base(nullptr) {}

	Base(AbstractDecorator *object) {
		this->cost = baseCost;
		this->object = object;
	}

	~Base() {
		if (object)
			delete object;
	}
};

#endif
