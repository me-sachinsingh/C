#include<stdio.h>

void main() {
	int i,j,k,x,sp,one=0,n;
	printf("Enter the n");
	scanf("%d", &n);

	if(n%2==0)
		n--;
	sp=n;
	for(i=0;i<n;i++) {
		if(i<=(n/2)) {
			sp-=2;
			one++;
		}
		else {
			sp+=2;
			one--;
		}
		for(j=0;j<one;j++) {
			printf("1");
		}
		for(k=0;k<sp;k++) {
			printf(" ");
		}

		x = j+k;
		while(x<n)	{
			printf("1");
			x++;
		}
		printf("\n");
	}
}
