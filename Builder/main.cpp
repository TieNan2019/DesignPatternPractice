#include "builder.h"



int main(void)
{
	/* 老板要求新的咖啡机允许用户自定义某些特性，且如果用户不指定，选择默认配方 */

	/* 用户选定配方 */
	Coffee *coffee = (new Builder("中杯", "拿铁"))->addSugar("少糖")->heat("加热")->build();
	
	/* 按照配方开始制作 */
	coffee->properties();

	/* 一饮而尽 */
	delete coffee;

	return 0;
}