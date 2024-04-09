/*
 Ввести с клавиатуры массив из 5 элементов, 
 найти среднее арифметическое всех элементов массива.
 */


#include <stdio.h>

const static int COUNT = 5;

int main(int argc, char **argv)
{
	int nums[COUNT];
	int summ = 0;
	
	for (int i = 0; i < COUNT; i++){
		scanf("%d", &nums[i]);
		summ += nums[i];
	}
	
	printf("%.3f", (float)summ / (float)COUNT);
	
	return 0;
}

