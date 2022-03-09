#include<stdio.h>
int add(int x, int y)
{
int sum;
sum=x+y;
return(sum);
}
void main()
{
int a,b,c;
printf("Enter 2 Numbers :");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("\n Sum of %d and %d is %d",a,b,c);
getch();
}
