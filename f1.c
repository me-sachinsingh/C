#include<stdio.h>
void main()
{
int i,j,k=0;
for(i=0;i<=4;i++)
{
++k;
for(j=0;j<=4;j++)
{
if(i==j)
printf("*");
else if(j==0)
printf("*");
else if(j>i)
printf("%d",k);
}
printf("\n");
}
}

