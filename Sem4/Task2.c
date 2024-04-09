/*
 Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	
	scanf("%d", &a);
	
	while (a < 100 || a >= 1000) { 
		printf("NO\n");
		scanf("%d", &a);
	}
	
	printf("YES\n");
	
	/*
	if (a >= 100 && a < 1000){
		printf("YES\n");
	}
	*/
	return 0;
}

