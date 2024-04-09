/* Задача 1: Ввести три числа,найти их сумму.
 * Нужно напечатать сумму трех чисел 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, z, summ;
	scanf("%d%d%d", &x, &y, &z);
	summ = x + y + z;
	printf("%d+%d+%d=%d\n", x, y, z, summ);
	return 0;
}

