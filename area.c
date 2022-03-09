#include<stdio.h>
void main()
{
float r,b,h,ac,ar;
printf("Enter the radious of circle");
scanf("%f",&r);
printf("\nEnter the height and breadth of the rectangle");
scanf("%f%f",&h,&b);
ar=b*h;
ac=3.14*r*r;
printf("\nArea of Circle =%f\nArea of Rectangle=%f",ac,ar);
getch();
}
