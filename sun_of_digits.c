#include<stdio.h>
void main()
{
int n,m,sum=0,x;
printf("Enter a number:");
scanf("%d",&n);
x=n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("Sum of digits of %d is %d",x,sum);
getch();
}
