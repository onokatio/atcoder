#include <stdio.h>

int main(void){
	int a,b;
	scanf("%d %d", &a, &b);
	if(a*b % 2){
		printf("Odd");
	}else{
		printf("Even");
	}

	return 0;
}
