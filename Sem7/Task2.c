/*
 Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
 */


#include <stdio.h>

const static int COUNT = 5;

int main(int argc, char **argv)
{
	int nums[COUNT];
	
	for (int i = 0; i < COUNT; i++){
		scanf("%d", &nums[i]);
	}
	
	int min = nums[0];
	
	for (int i = 0; i < COUNT; i++){
		if (min > nums[i]){
			min = nums[i];
		}
	}
	
	printf("%d", min);
	return 0;
}

