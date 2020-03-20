#include <stdio.h>

int main(void){
	int n;
	int a[200];
	scanf("%d", &n);
	for(int i=0; i<n ;i++){
		scanf("%d", a+i);
	}
	int stop=0;
	int count=0;
	while(!stop){
		for(int i=0; i<n ;i++){
			if(a[i] % 2) stop=1;
		}
		if(!stop){
			count++;
			for(int i=0; i<n ;i++){
				a[i]/=2;
			}
		}

		for(int i=0; i<n ;i++){
			//printf("%d ",a[i]);
		}
	}
	printf("%d",count);

	return 0;
}
