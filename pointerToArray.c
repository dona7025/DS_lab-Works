#include<stdio.h>
int main()
{
double balance[5]={100.0,2.0,3.4,17.6,50.5};
double *p;
int i;
p=balance;
printf("array values using pointer:\n");
for(i=0;i<5;i++)
{
printf("*(p+%d):%f\n",i,*(p+i));
}
printf("array values using balance as address:\n");
for(i=0;i<5;i++)
{
printf("*(balance+%d):%f\n",i,*(balance+i));
}
return 0;
}
