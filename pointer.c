#include<stdio.h>
#include<conio.h>
void main()
{
int x;
int *i;
printf(" Enter the value of x:");
scanf("%d",&x);
i= &x;
printf("\n x=%d",x);
printf("\n i=%d",i);
printf("\n address(x)=%d",&x);
printf("\nValue in i = %d",*i);
getch();
}
