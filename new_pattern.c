#include<stdio.h>

void main() {
	int i,j,sp=3;
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			if(j<sp)
				printf(" ");
			else
				printf("1");
		}
	printf("\n");
	sp--;		
	}
}
