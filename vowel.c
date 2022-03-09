#include<stdio.h>
void main()
{
char x;
printf("enter an Alphabet:");
scanf("%c",&x);
switch(x)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("%c is Vowel",x);
    break;
default:
    printf("%c is Not Vowel",x);
}
getch();
}
