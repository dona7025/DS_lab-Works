#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;
int isempty() {
if(top == -1)
return 1;
else
return 0;
}
int isfull() {
if(top == MAXSIZE)
return 1;
else
return 0;
}
int peek() {
return stack[top];
}

int pop() {
int data;
if(!isempty()) {
data = stack[top];
top = top - 1;
return data;
} else {
printf("Could not retrieve data, Stack is empty.\n");
}
}
int push(int data) {
if(!isfull()) {
top = top + 1;
stack[top] = data;
} else {
printf("Could not insert data, Stack is full.\n");
}
}
void main() {
    int j,noOfEle, val;
    printf("Enter the no of elements:\n");
 scanf("%d",&noOfEle);
// push items on to the stack
if(noOfEle<=MAXSIZE)
{
for(j=0;j<noOfEle;j++)
{
 printf("Enter a value:");
 scanf("%d",&val);
 push(val);
}
}
printf("Stack full: %s\n" , isfull()?"true":"false");
printf("Stack empty: %s\n" , isempty()?"true":"false");
printf("\n");
printf("Element at top of the stack: %d\n" ,peek());
printf("Elements: \n");
// print stack data
while(!isempty()) {
int data = pop();
printf("%d\n",data);
}
printf("Stack full: %s\n" , isfull()?"true":"false");
printf("Stack empty: %s\n" , isempty()?"true":"false");
getch();
}
