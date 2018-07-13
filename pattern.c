#include<stdio.h>

void main() {
	int i,j=0,count=0;
	for(i=0;i<5;i++) {
		if(i<3)
			count++;
		else
			count--;

		for(j=0;j<count;j++){
			printf("1");
		}

	printf("\n");
	}
}
