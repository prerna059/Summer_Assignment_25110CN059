#include<stdio.h>
#include<math.h>
int even(int a, int array[]);
int main(){
  int n;
  printf("Enter the size of Array: ");
  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<=n-1; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  
  printf("The number of even numbers in the array is %d\n", even(n, arr));
  printf("The number of odd elements in the array is %d", n-even(n, arr));
  return 0;
}
int even(int a, int array[]){
  int count=0;
  for(int i=0; i<=a-1; i++){
     if(array[i]&0) count++;
}
return count;
}
