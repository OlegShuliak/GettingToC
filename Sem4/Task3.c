/*
 Ввести целое число и определить, верно ли, что всеего цифры четные. 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, num;
	int res = 0;
	scanf("%d", &a);
	for (int i = a; i > 0; i /= 10){
		num = a % 10;
		if (num % 2 > 0){
			res = 1;
			break;
		}
	}
	
	if (res == 1){
		printf("NO\n");
	} else {
		printf("YES\n");
	}
	return 0;
}

