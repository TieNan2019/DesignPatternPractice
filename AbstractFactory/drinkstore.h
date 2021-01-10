#ifndef _DRINKSTORE_H_
#define _DRINKSTORE_H_

#include <iostream>

#include "absfactory.h"


class LargeCoffee: public AbstractDrink {
public:
	virtual void properties() {
		std::cout << "大杯拿铁!" << std::endl;
	}
};



class MediumCoffee: public AbstractDrink {
public:
	virtual void properties() {
		std::cout << "中杯拿铁!" << std::endl;
	}
};



class SmallCoffee: public AbstractDrink {
public:
	virtual void properties() {
		std::cout << "小杯拿铁!" << std::endl;
	}
};



class CoffeeShop: public AbstractFactor {
public:
	virtual AbstractDrink* getLarge() {
		return new LargeCoffee;
	}

	virtual AbstractDrink* getMedium() {
		return new MediumCoffee;
	}

	virtual AbstractDrink* getSmall() {
		return new SmallCoffee;
	}
};



class LargeOrangeJuice: public AbstractDrink {
public:
	virtual void properties() {
		std::cout << "大杯桔汁!" << std::endl;
	}
};



class MediumOrangeJuice: public AbstractDrink {
public:
	virtual void properties() {
		std::cout << "中杯桔汁!" << std::endl;
	}
};



class SmallOrangeJuice: public AbstractDrink {
public:
	virtual void properties() {
		std::cout << "小杯桔汁!" << std::endl;
	}
};



class JuiceShop: public AbstractFactor {
public:
	virtual AbstractDrink* getLarge() {
		return new LargeOrangeJuice;
	}

	virtual AbstractDrink* getMedium() {
		return new MediumOrangeJuice;
	}

	virtual AbstractDrink* getSmall()  {
		return new SmallOrangeJuice;
	}
};
#endif
