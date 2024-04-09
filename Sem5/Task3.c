/*
 Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению.
 */


#include <stdio.h>

int is_happy_number(int n);

int main(int argc, char **argv)
{
	int num;
	scanf("%d", &num);
	if (is_happy_number(num) == 1){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

int is_happy_number(int n){
	int summ = 0;
	int mult = 1;
	while (n != 0){
		summ += n % 10;
		mult *= n % 10;
		n /= 10;
	}
	
	if (summ == mult) {
		return 1;
	} else {
		return 0;
	}
}
