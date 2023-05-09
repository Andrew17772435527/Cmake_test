/**══════════════════════════════════╗
*═══════════════════════════════════╣
*创建时间:                                                             ║
*═══════════════════════════════════╝
*/

#include "project_2.h"

void test_function_1(void)
{
	test_struct t1 = {8,10};
	printf("t1.test_char=%hd\n", t1.test_char);
};
void test_function_2(void)
{
	printf("test_function_2\n");
};
int main() 
{
	test_function_1();
	test_function_2();
	return 0;
}

