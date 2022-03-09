#include<stdio.h>
void main()
{
int f=0,s=1,new=0,n,i;
printf("Enter the limit:");
scanf("%d",&n);
printf("%d\t%d\t",f,s);
for(i=2;i<=n;i++)
{
new=f+s;
printf("%d\t",new);
f=s;
s=new;
}
getch();
}
