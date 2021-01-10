#ifndef _DRINK_H_
#define _DRINK_H_

#include <iostream>

#include "factory.h"


/* 咖啡 */
class Coffee: public AbstractDrink {
private:
	int milk;
	int sugar;
	int cheese;
	int temperature;
public:
	Coffee(int milk, int sugar, int cheese, int temperature):
	milk(milk), sugar(sugar), cheese(cheese), temperature(temperature) {}

	virtual void properties() {
		std::cout << "咖啡 : " << std::endl;
		std::cout << "牛奶 : " << milk << " g" << std::endl;
		std::cout << "白糖 : " << sugar << " g" << std::endl;
		std::cout << "芝士 : " << cheese << " g" << std::endl;
		std::cout << "温度 : " << temperature << std::endl;
	}
};

/* 果汁 */
class Juice: public AbstractDrink {
private:
	int sugar;
	bool ice;
	std::string taste;
public:
	Juice(int sugar, bool ice, std::string taste):
	sugar(sugar), ice(ice), taste(taste) {};

	virtual void properties() {
		std::cout << taste << "汁 : " << std::endl;
		std::cout << "白糖 : " << sugar << " g" << std::endl;
		std::cout << "加冰 : " << (ice? "加冰" : "不加冰") << std::endl;
		std::cout << "口味 : " << taste << std::endl;
	}

};


/* 咖啡柜台用于制作咖啡 */
class CoffeShop: public AbstractFactory {
public:
	AbstractDrink *makeDrink(std::string m, std::string s, std::string c, std::string t) {
		int milk;
		int sugar;
		int cheese;
		int temperature;

		milk = m == "加奶" ? 25 : 0;
		
		if (s == "无糖")
			sugar = 0;
		else if (s == "少糖")
			sugar = 5;
		else if (s == "中糖")
			sugar = 10;
		else if (s == "多糖")
			sugar = 15;

		cheese = c == "加芝士" ? 5 : 0;

		if (t == "冷")
			temperature = 10;
		else if (t == "常温")
			temperature = 25;
		else if (t == "加热")
			temperature = 50;

		return new Coffee(milk, sugar, cheese, temperature);
	};
};


/* 果汁柜台专用于制作果汁饮料 */
class JuiceShop: public AbstractFactory {
public:
	AbstractDrink *makeDrink(std::string s, std::string i, std::string t) {
		int sugar;
		bool ice;
		std::string taste;

		if (s == "无糖")
			sugar = 0;
		else if (s == "少糖")
			sugar = 5;
		else if (s == "中糖")
			sugar = 10;
		else if (s == "多糖")
			sugar = 15;
		
		ice = i == "加冰";

		taste = t;

		return new Juice(sugar, ice, taste);
	}
};

#endif