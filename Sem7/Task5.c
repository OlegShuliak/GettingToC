/*
 Считать массив из 10 элементов и отобрать в другой массив все числа, 
 у которых вторая с конца цифра(число десятков)– ноль.
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
	
	int len = 0;
	
	for (int i = 0; i < COUNT; i++){
		if (nums[i]%100/10 == 0){
			len ++;
		}
	}
	
	int resArr[len];
	
	for (int i = 0, j = 0; i < COUNT; i++){
		if (nums[i]%100/10 == 0){
			resArr[j] = nums[i];
			j++;
		}
	}
	
	aPrint(resArr, len);
	
	return 0;
}

