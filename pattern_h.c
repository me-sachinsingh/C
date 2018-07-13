#include<stdio.h>

void main() {
	int i,k,j,lsp=0;
	for(i=0;i<5;i++) {
		if(i<3)
			lsp++;
		else
			lsp--;

		for(j=0;j<lsp;j++) {
			printf("1");
		}
	
		for(k=0;k<(6-lsp*2);k++) {
			printf(" ");
		}
			
		for(j=0;j<lsp;j++) {
			printf("1");
		}
		
		printf("\n");
	}
}
