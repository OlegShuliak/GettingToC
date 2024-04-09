/*
 Ввести три числа, найти их сумму и произведение
 Нужно напечатать сумму и произведение трех чисел 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, z, summ, mult;
	scanf("%d%d%d", &x, &y, &z);
	summ = x + y + z;
	printf("%d+%d+%d=%d\n", x, y, z, summ);
	mult = x * y * z;
	printf("%d*%d*%d=%d\n", x, y, z, mult);
	return 0;
}

