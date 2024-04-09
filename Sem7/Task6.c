/*
 Дан массив из 10 элементов. 
 Определить, какое число в массиве встречается чаще всего. 
 Гарантируется, что такое число ровно 1.
 */


#include <stdio.h>

void aPrint(int *arr, int len) {    
	for (int i = 0; i < len; i++){ 
	printf("%d ",arr[i]);
	}
	printf("\n");
}

const static int COUNT = 10;

int main(int argc, char **argv)
{
	int nums[COUNT];
	
	for (int i = 0; i < COUNT; i++){
		scanf("%d", &nums[i]);
	}
	
	for (int i = 0; i < COUNT - 1; i++){
		if (nums[i+1] < nums[i]){
			int buff = nums[i+1];
			nums[i+1] = nums[i];
			nums[i] = buff;
			i = -1;
		}
	}
	
	aPrint(nums, COUNT);
	
	int resArr[COUNT];
	int qty = 1;
	
	for (int i = 0; i < COUNT; i++){
		for (int j = i + 1; j < COUNT; j++){
			if (nums[i] == nums[j]){
				qty++;
			} else {
				resArr[qty] = nums[i];
				i = j - 1;
				qty = 1;
				break;
			}
		}
	}
	
	aPrint(resArr, COUNT);
	
	for (int i = COUNT - 1; i > 0; i--) {
		if (resArr[i] != NULL) {
			printf("%d", resArr[i]);
			break;
		}
	}
	
	return 0;
}

