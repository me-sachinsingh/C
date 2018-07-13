#include<stdio.h>

void main() {
	int n,k;
	printf("Enter the number\n");
	scanf("%d",&n);

	printf("Enter the bit position to set\n");
	scanf("%d", &k);

	int a=1;
	int x=a<<k;
	printf("Number is %d\n", n | x);
}
