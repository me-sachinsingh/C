#include<stdio.h>

void main() {
	int a=10,b=20,c=30;
	int d=(++a,++b,++c,a+5);
	printf("%d\n", d);
}
