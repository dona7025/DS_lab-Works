#include<stdio.h>
#include<conio.h>
void arraySum()
{
int x[20],n,i,sum=0;
print("Enter the size of the array:");
scanf("%d",&n);
printf("Enter %d Numbers:",n);
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
sum=sum+x[i];
}
printf("Sum=%d",sum);
}
void main()
{
arraySum();
getch();
}
