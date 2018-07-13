#include<stdio.h>

void main() {
	int i,j,n,pos1,pos2,len=-1;
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		if(i<=(n/2))
			len++;
		else
			len--;
		for(j=0;j<n;j++) {
			if(j>=(n/2 - len) && j<=(n/2 + len))
				printf("*");
			else 
				printf(" ");
		}
	printf("\n");
	}
}
