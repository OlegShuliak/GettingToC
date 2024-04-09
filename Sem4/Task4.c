/*
 Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, reverseA;
	int buff = 1;
	scanf("%d", &a);
	
	for (int i = a / 10; i > 0; i /= 10){
		buff *= 10;
	}
	
	while (a > 0){
		reverseA += a % 10 * buff;
		buff /= 10;
		a /= 10;
	}
	
	printf("%d", reverseA);
	
	return 0;
}

