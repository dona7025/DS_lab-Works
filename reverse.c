#include<stdio.h>
void main()
{
int n,rev=0,x;
printf("Enter a number:");
scanf("%d",&n);
x=n;
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("Reverse of %d is %d",x,rev);
getch();
}
