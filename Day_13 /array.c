#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  n=(n<0)?-n:n;
  int arr[n];
  
  for(int i=0; i<=n-1; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for(int j=0; j<=n-1; j++){
    printf("%d ",arr[j] );
  }
  return 0;
}
