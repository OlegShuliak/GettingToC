/*
 Ввести два целых числа a и b(a ≤ b)и вывести сумму квадратов всех чисел от a до b.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	 int a, b, c;
	 scanf("%d%d", &a, &b);
	 while (a > b){
		printf("Incorrect input. Try again.\n");
		scanf("%d%d", &a, &b); 
	}
	
	while (a <= b){
		c += a * a;
		a ++;
	}
	
	printf("%d", c);
	return 0;
}

