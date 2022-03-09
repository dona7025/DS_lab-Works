#include<stdio.h>
#include<conio.h>
void large(int x,int y)
{
if(x>y)
{
printf("\n  Largest = %d",x);
}
else
{
printf("\n  Largest = %d",y);
}
}
void main()
{
int a,b;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
large(a,b);
getch();
}
