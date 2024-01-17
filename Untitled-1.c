#include<stdio.h>
void main() {
int n,i,j,sum=0,fact;
printf("enter number :");
scanf("%d",n);

for(i=1;i<=n;i++)
{
    fact=1;
    for(j=i;j>=1,j--)
    {
        fact=fact*j;
    }
    sum=sum+fact;
}
printf("sum of factorial upto %d is: %d",n,sum);
}