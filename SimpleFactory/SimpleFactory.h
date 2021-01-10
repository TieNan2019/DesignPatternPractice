/* **********************************************************
 * 简单工厂
 * 严格来说，简单工厂并不是一种设计模式，
 * 其特点是通过一个工厂类，给进所需参数，就可以生成对象，
 * 用户无需知道对象生成的具体细节，实现了对象生成与使用的解耦
 * 但是简单工厂所生成的对象策略全部都硬编码在代码中，非常不利于程序的扩展
 * **********************************************************/

#ifndef _SIMPLE_FACTORY_H_
#define _SIMPLE_FACTORY_H_

#include <iostream>


class Drink {
private:
	/* 加糖的量 (克) */
	int sugar;
	/* 加入奶昔的量 (克) */
	int shake;
	/* 是否加冰 */
	bool ice;
	/* 是否加珍珠 */
	bool pearl;
public:
	/* 用一系列参数初始化奶茶 */
	Drink(int sugar, int shake, bool ice, bool pearl):
	sugar(sugar), shake(shake), ice(ice), pearl(pearl) {}

	/* 默认构造, 委托实例化一个不加任何配料的奶茶饮料示例 */
	Drink(): Drink(0, 0, false, false) {}

	void moreSugar() {
		sugar += 2;
	}

	void moreShake() {
		shake += 2;
	}

	/* 显示奶茶的属性 */
	void properties() {
		std::cout << "配方 : " << std::endl;
		std::cout << "糖 : " << sugar << "　克" << std::endl;
		std::cout << "奶昔 : " << shake << " 克" << std::endl;
		std::cout << "加冰 : " << (ice ? "加冰" : "不加冰") << std::endl;
		std::cout << "珍珠 : " << (pearl ? "加珍珠" : "不加珍珠") << std::endl;
	}
};


class SimpleFactory {
public:
	Drink *makeDrink() {
		return new Drink();
	}

	Drink *makeDrink(int sugar, int shake, bool ice, bool pearl) {
		return new Drink(sugar, shake, ice, pearl);
	}

	/* 简单工厂会利用一系列参数实例化并返回对象 */
	Drink *makeDrink(std::string sugarExpression, std::string shakeExpression, std::string iceExpression, std::string pearlExpression) {
		int sugar = 0;
		int shake = 0;
		bool ice = false;
		bool pearl = false;

		if (sugarExpression == "无糖")
			sugar = 0;
		else if (sugarExpression == "少糖")
			sugar = 5;
		else if (sugarExpression == "中糖")
			sugar = 10;
		else if (sugarExpression == "多糖")
			sugar = 15;

		shake = shakeExpression == "加奶昔" ? 10 : 0;

		ice = iceExpression == "加冰";

		pearl = pearlExpression == "加珍珠";

		return new Drink(sugar, shake, ice, pearl);
	}
};
#endif