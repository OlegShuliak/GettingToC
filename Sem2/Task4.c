/*
 На вход подается произвольное четырехзначное число 
 Нужно напечатать среднее арифметическое цифр
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x;
	scanf("%d", &x);
	double arith = (x%10 + (x % 100 / 10) + (x % 1000 / 100) + (x % 10000 / 1000)) / 4.0;
	printf("%.2f", arith);
	return 0;
}

