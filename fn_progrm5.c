#include<stdio.h>
void main()
{
double balance[5]={1000.0,2.0,3.4,17.0,50.0};
double *p;
int i;
p=balance;
printf("Array value using pointer \n");
for(i=0;i<5;i++)
{
printf("Array value using balance as address \n");
for(i=0;i<5;i++)
{
printf("*(balance+ %d):%d):%f\n",i,*(balance +i));
}

}
getch();
}
