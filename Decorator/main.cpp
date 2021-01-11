#include <iostream>
#include "decorator.h"



int main(void)
{
	int totalCost;

	/* 用户定制  */
	AbstractDecorator *drink = new Milk(new Cheese(new Pearl(new Shake(new Sugar(new Base)))));

	/* 计算总价 */
	totalCost = drink->totalCost();

	/* 出示价格，用户扫码 */
	std::cout << totalCost << std::endl;

	/* 一饮而尽 */
	delete drink;

	return 0;
}
