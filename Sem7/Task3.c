/*
 Считать массив из 12 элементов и выполнить 
 циклический сдвиг ВПРАВО на 4 элемента.
 */


#include <stdio.h>

void aPrint(int *arr, int len) {    
	for (int i = 0; i < len; i++){ 
	printf("%d ",arr[i]);
	}
}

const static int COUNT = 12;

int main(int argc, char **argv)
{
	int nums[COUNT];
	
	for (int i = 0; i < COUNT; i++){
		scanf("%d", &nums[i]);
	}
	
	int buff[4] = {nums[COUNT - 4], nums[COUNT - 3], nums[COUNT - 2], nums[COUNT - 1]};
	
	for (int i = COUNT, j = COUNT - 4; j >= 0; i--,  j--){
		nums[i] = nums[j];
	}
	
	for (int i = 0; i < 4; i++){
		nums[i] = buff[i];
	}
	
	aPrint(nums, COUNT);
	
	return 0;
}

