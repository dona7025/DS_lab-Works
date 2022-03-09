#include<stdio.h>
#include<conio.h>
void factorial(int x)
{
int i,fact=1;
for(i=1;i<=x;i++)
{
fact=fact*i;
}
printf("%d!=%d",x,fact);
}
void main()
{
int n;
printf("Enter a Number:");
scanf("%d",&n);
factorial(n);
getch();
}
