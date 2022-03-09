#include <stdio.h>
int main()
{
  int array[100], search, c, n,i;

  printf("\nEnter number of elements in array\n");
  scanf("%d", &n);

  printf("\nEnter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

    printf("\nThe Array is:\n");
  for(i=0;i<n;i++)
  {
      printf("\t %d",array[i]);
  }



  printf("\nEnter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("\n%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("\n%d isn't present in the array.\n", search);

  return 0;
}
