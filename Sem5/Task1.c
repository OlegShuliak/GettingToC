/*
 Когда создатель шахмат, древнеиндийский мудрец и математик Сиссабен Дахир,
 показал своё изобретение Правителю страны, тому так понравилась игра, 
 что он позволил изобретателю право самому выбрать награду. Мудрец 
 попросил у Повелителя за первую клетку шахматной доски заплатить ему одно 
 зерно риса, за второе — два, за третье — четыре и т.д., удваивая количество 
 зёрен на каждой следующей клетке. Помоги повелителю сосчитать сколько зерен 
 на какой клетке лежит. Необходимо составить функцию, которая определяет,
 сколько зерен попросил положить на N-ую клетку изобретатель шахмат
 (на1-ую – 1зерно,на2-ую – 2 зерна,на 3-ю – 4зерна,…)
 */ 


#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	int quantity = 1;
	scanf("%d", &n);
	for (int i = 1; i < n; i++){
		quantity *= 2;
	}
	printf("%d", quantity);
	return 0;
}

