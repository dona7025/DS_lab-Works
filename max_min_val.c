#include<stdio.h>
void main()
{
int i,a[20],n,max,min;
printf("Enter the no ofelement in the array");
scanf("%d",&n);
printf("\nEnter %d numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
if(min>a[i])
{
min=a[i];
}
}
printf("\n Maximum Value:%d",max);
printf("\n Minimum Value:%d",min);
getch();
}
