#include<stdio.h>

void main() {
	int i,j;
	
	for(i=0;i<4;i++) {
		printf("1");
		for(j=0;j<i;j++) {
			printf("%d", i+1);
		}
		printf("1");
		printf("\n");
	}
}
