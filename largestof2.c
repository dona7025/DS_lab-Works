#include<stdio.h>
void main()
{
float n1,n2;
printf("Enter 2 numbers:");
scanf("%f%f",&n1,&n2);
if(n1>n2)
{
printf("\n The Largest among %f and %f is %f",n1,n2,n1);
}
else
{

printf("\n The Largest among %f and %f is %f",n1,n2,n2);
}
getch();
}
