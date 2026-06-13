#iclude<stdio.h>
int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  
  for(int i=0; i<=n-1; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  int sum=0;
  printf("Sum of array elements: ");
  for(int j=0; j<=n-1; j++){
    sum+=arr[j];
  }
   printf("%d ",sum );
float avg = sum/n;
printf("\nThe average is %f ", avg);
  return 0;
}
