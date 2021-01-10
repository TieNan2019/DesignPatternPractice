#ifndef _BUILDER_H_
#define _BUILDER_H_

#include <iostream>


class Coffee {
private:
	std::string size;
	std::string type;
	std::string sugar;
	std::string temperature;
public:
	Coffee (std::string size, std::string type, std::string sugar, std::string temperature):
	size(size), type(type), sugar(sugar), temperature(temperature) { }

	void properties() {
		std::cout << type << " :" << std::endl;
		std::cout << "尺寸 : " << size << std::endl;
		std::cout << "加糖 : " << sugar << std::endl;
		std::cout << "温度 : " << temperature << std::endl;
	}
};


class Builder {
private:
	std::string size;
	std::string type;
	std::string sugar;
	std::string temperature;

public:
	Builder(std::string size, std::string type): size(size), type(type) {
		sugar = "无糖";
		temperature = "常温";
	}

	Builder *addSugar(std::string s) {
		sugar = s;
		return this;
	}

	Builder *heat(std::string t) {
		temperature = t;
		return this;
	}

	Coffee* build() {
		Coffee *coffee = new Coffee(size, type, sugar, temperature);
		/* 趁着这个对象还在埋头执行这个方法的时候 */
		/* 偷偷把它释放掉, 对象甚至注意不到自己没了, 嘘! */
		delete this;
		return coffee;
	}
};

#endif
