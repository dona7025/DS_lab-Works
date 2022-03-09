#include<stdio.h>

int insertElement(int arr[], int elements, int keyToBeInserted, int size)
{
if (elements >= size)
return elements;
arr[elements] = keyToBeInserted;
return (elements + 1);
}
void main()
{
int array[20],n,i;
printf(" \n Enter the size of the array:");
scanf("%d",&n);
printf("Enter the %d Elements:",n);
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
int size = sizeof(array);
int elements;
int keyToBeInserted;
printf("\n Enter the position of Element to be inserted:");
scanf("%d",&elements);
printf("\n Enter the Element to be inserted:");
scanf("%d",&keyToBeInserted);
printf("\n Before Insertion: ");
for (i = 0; i < size; i++)
printf("%d  ", array[i]);
elements = insertElement(array, elements, keyToBeInserted, size);
printf("\n After Insertion: ");
for (i = 0; i < size; i++)
printf("%d  ",array[i]);
getch();
}
