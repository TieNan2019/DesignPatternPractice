#include "drink.h"



int main(void)
{
	/* 来到咖啡柜台前 */
	CoffeShop *coffeeShop = new CoffeShop;
	/* 定制了一杯拿铁 */
	AbstractDrink *latte = coffeeShop->makeDrink("加奶", "少糖", "无芝士","加热");
	latte->properties();

	/* 来到果汁柜台前 */
	JuiceShop *juiceShop = new JuiceShop;
	/* 定制一杯果汁 */
	AbstractDrink *orangeJuice = juiceShop->makeDrink("中糖", "加冰", "甜橙");
	orangeJuice->properties();

	/* 喝掉拿铁 */
	delete latte;
	/* 喝掉果汁 */
	delete orangeJuice;

	/* 下班时间撤掉柜台 */
	delete juiceShop;
	delete coffeeShop;

	return 0;
}