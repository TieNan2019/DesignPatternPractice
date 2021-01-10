#include "drinkstore.h"



int main(void) {
	/* 需求上涨，店面扩建，生产也需要更加规范化 */
	/* 所以以前的一类饮料一种机器已经不能满足需求 */
	/* 饮料机在这一过程中实现模块化，满足定制化需求 */

	/* 由于流量小生的宣传，喝咖啡变成了时尚 */
	/* 顺应市场需求，安装咖啡机 */
	AbstractFactor *machine = new CoffeeShop;
	/* 顾客购买了中杯咖啡 */
	AbstractDrink *drink = machine->getMedium();
	drink->properties();

	/* 一饮而尽 */
	delete drink;


	/* 生意红火了一段时间 */
	/* 夏季来了，总书记号召群众健康饮食 */
	/* 午睡过后一杯冰果汁成为时尚 */
	/* 果汁供不应求，为了满足市场需求，需要将原来安装的咖啡机也改装果汁机 */

	/* 拆除咖啡机 */
	delete machine;
	/* 安装果汁机 */
	machine = new JuiceShop;

	/* 顾客购买了一杯果汁 */
	drink = machine->getLarge();
	drink->properties();
	/* 夏日的中午，甜美的橙汁沁人心脾，顾客一饮而尽 */
	delete drink;

	/* 下班前，将果汁机拆下来维护 */
	delete machine;

	return 0;
}