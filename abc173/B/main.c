#include <stdio.h>

int main(void){
	int N;
	char s[100000][5] = {};
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf("%s", s[i]);
	}
	int AC=0;
	int WA=0;
	int TLE=0;
	int RE=0;
	for(int i=0;i<N;i++){
		switch(s[i][0]){
			case 'A':
				AC++;
				break;
			case 'W':
				WA++;
				break;
			case 'T':
				TLE++;
				break;
			case 'R':
				RE++;
				break;
		}
	}
	printf("AC x %d\n",AC);
	printf("WA x %d\n",WA);
	printf("TLE x %d\n",TLE);
	printf("RE x %d\n",RE);

	return 0;
}
