#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

void main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x,i;
  int n = sizeof(array) / sizeof(array[0]);
  printf("\nThe Array is:\n");
  for(i=0;i<n;i++)
  {
      printf("\t %d",array[i]);
  }


  printf("\nEnter the Search element:");
  scanf("%d",&x);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("\nElement is found at index %d", result);
  return 0;
}
