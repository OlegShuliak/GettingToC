/*
 Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.
 */


#include <stdio.h>

int summ (int n);

int main(int argc, char **argv)
{
	int num;
	scanf("%d", &num);
	printf("%d", summ(num));
	return 0;
}

int summ (int n){
	int result = 0;
	while (n > 0){
		result += n;
		n--;
	}
	return result;
}
