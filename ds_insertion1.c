//Search for the position of an element
#include<stdio.h>
int findElement(int array[], int size, int keyToBeSearched)
{
int i;
for (i = 0; i < size; i++)
if (array[i] == keyToBeSearched)
return i;
return - 1;
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
int keyToBeSearched ;
printf("\n Enter the Search Element:");
scanf("%d",&keyToBeSearched);
int pos = findElement(array, size, keyToBeSearched);
if(pos==-1){
printf("n Element %d not found", keyToBeSearched);
}
else{
printf("n Position of %d: %d", keyToBeSearched ,pos+1);
}
getch();
}
