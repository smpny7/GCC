#include <stdio.h>

int main(void) {
	
	int j, x, y, n, m, l;
	
	printf("Input The Number(Multiple of 3)\n");
	printf("N: ");
	scanf("%d", &n);
	
	m = n / 3;
	l = m * 2;
	
	for(j=1; j<=n; j++){
			if(j>m && j<=l){
				x = 1;
				while(x<=m){
					printf("*");
					x++;
				}
				while(x<=l){
					printf("+");
					x++;
				}
				while(x<=n){
					printf("*");
					x++;
				}
				printf("\n");
			}else{
				for(y=1; y<=n; y++){
					printf("*");
				}
				printf("\n");
			}
	}
	
	return 0;
}
