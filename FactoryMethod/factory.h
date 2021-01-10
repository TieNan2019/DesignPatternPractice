#ifndef __FACTORY_H_
#define __FACTORY_H_


/* 抽象饮料 */
class AbstractDrink {
public:
	virtual void properties() = 0;
};

/* 抽象饮料工厂 */
class AbstractFactory {
};


#endif