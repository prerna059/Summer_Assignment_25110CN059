#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  n=(n<0)?-n:n;
  int arr[n];
  for(int i=0; i<=n-1; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  int max =arr[0];
  int min= arr[0];
  for(int j=0; j<=n-1; j++){
    max=(max<arr[j])?arr[j]:max;
    min=(min>arr[j])?arr[j]:min;
  }
  printf("The largest element of array is %d\n", max);
  printf("The smallest element of array is %d", min);
  return 0;
}
