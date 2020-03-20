#include <stdio.h>

int main(void){
	int a;
	int count = 0;
	scanf("%d",&a);
	while(a!=0){
		if(a%10) count++;
		a/=10;
	}
	printf("%d", count);

	return 0;
}
