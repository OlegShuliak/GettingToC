/*
 Ввести два числа и найти их разность 
 Нужно напечатать разность двух чисел
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, diff;
	scanf("%d%d", &x, &y);
	diff = x - y;
	printf("%d\n", diff);
	return 0;
}

