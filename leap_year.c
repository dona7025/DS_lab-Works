#include<stdio.h>
void main()
{
int year;
printf("Enter a Year:");
scanf("%d",&year);
if(year%400==0)
{
printf("\n%d is a Leap Year",year);
}
else if(year%100==0)
{
printf("\n%d is Not a Leap Year",year);
}
else if(year%4==0)
{
printf("\n%d is a Leap Year",year);
}
else
{
printf("\n%d is Not a Leap Year",year);
}
getch();
}
