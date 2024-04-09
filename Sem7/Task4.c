/*
 Считать массив из 10 элементов и отсортировать его по последней цифре.
 */


#include <stdio.h>

void aPrint(int *arr, int len) {    
	for (int i = 0; i < len; i++){ 
	printf("%d ",arr[i]);
	}
}

const static int COUNT = 10;

int main(int argc, char **argv)
{
	int nums[COUNT];
	
	for (int i = 0; i < COUNT; i++){
		scanf("%d", &nums[i]);
	}
	
	for (int i = 0; i < COUNT - 1; i++){
		if (nums[i+1]%10 < nums[i]%10){
			int buff = nums[i+1];
			nums[i+1] = nums[i];
			nums[i] = buff;
			i = -1;
		}
	}
	
	aPrint(nums, COUNT);
	
	return 0;
}

