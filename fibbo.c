#include<stdio.h>

void main() {
	int a=0,b=1,c=0;
	printf("%d %d ",a,b);
	while(b<100) {
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	printf("\n");
}
