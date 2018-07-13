#include<stdio.h>

void main() {
	int n,k;
	printf("Enter the number\n");
	scanf("%d",&n);

	printf("Enter the bit position to reset\n");
	scanf("%d", &k);

	int x=1<<k;
	printf("Number is %d\n", n & ~x);
}
