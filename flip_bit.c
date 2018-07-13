#include<stdio.h>

void main() {
	int n,k;
	printf("Enter the number\n");
	scanf("%d",&n);

	printf("Enter the bit position to flip\n");
	scanf("%d", &k);

	int x=0<<k;
	n^=x;
	int y=1<<k;
	n^=y;
	printf("Number is %d\n", n);
}
