#include <stdio.h>
int calculateSum(int num[],int n);

void main() {
  int result,n,arr[20];
  printf("enter the size of array");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

  // num array is passed to calculateSum()
  result = calculateSum(arr,n);
  printf("Result = %d", result);
 getch();
}

int calculateSum(int arr[],int n) {
  int sum = 0;

  for (int i = 0; i < n; ++i) {
    sum += arr[i];
  }

  return sum;
}
