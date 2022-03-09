#include<stdio.h>
struct Student
{
char s_name[50];
int rno;
int m1,m2,m3,total,percent;
};
void main()
{
int n,i;
printf("Enter the no. of students:");
scanf("%d",&n);
struct Student s[n];
for(i=0;i<n;i++)
{
printf("\n Enter the name of Student:");
scanf("%s",&s[i].s_name);
printf("\n Enter the roll no. of Student:");
scanf("%d",&s[i].rno);
printf("\n Enter the mark of 3 subjects of Student:");
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
}
for(i=0;i<n;i++)
{
s[i].total=s[i].m1+s[i].m2+s[i].m3;
s[i].percent=(s[i].total*100)/300;
}
for(i=0;i<n;i++)
{
printf("\n Roll No:%d\tName:%s\tMark 1:%d\tMark 2:%d\tMark 3:%d\tTotal Mark:%d\tPercentage:%d",s[i].rno,s[i].s_name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].percent);
}
getch();
}
