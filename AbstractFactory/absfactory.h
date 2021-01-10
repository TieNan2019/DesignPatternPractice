#ifndef _ABSFACTOR_H_
#define _ABSFACTOR_H_

class AbstractDrink {
public:
	virtual void properties() = 0;
};


class AbstractFactor {
public:
	virtual AbstractDrink *getLarge() = 0;
	virtual AbstractDrink *getMedium() = 0;
	virtual AbstractDrink *getSmall() = 0;
};


#endif