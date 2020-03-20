#include <stdio.h>

int main(void){
	int n,a,b,c;
	int count=0;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	for(int i=1; i<=n ;i++){
		int sum=0;
		int j = i;
		while(j!=0){
			sum+=j%10;
			j/=10;
		}
		if(a <= sum && sum <=b){
			//printf("%d ",sum);
			count+=i;
		}

	}
	printf("%d",count);

	return 0;
}
