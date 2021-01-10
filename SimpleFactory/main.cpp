#include "SimpleFactory.h"




int main(void) {
	/* 要想喝奶茶，首先需要一个制作奶茶的店面/工厂 */
	SimpleFactory store;

	/* 给出需求, 得到奶茶 */
	Drink *drink = store.makeDrink("少糖", "不加奶昔", "不加冰", "加珍珠");

	drink->properties();

	delete drink;
	
	return 0;
}