#include<stdio.h>

void main() {
	int n,k;
	printf("Enter the number\n");
	scanf("%d",&n);

	printf("Enter the bit position to query\n");
	scanf("%d", &k);

	n = n>>k;

	printf("kth bit is %d\n", n & 1);
}
