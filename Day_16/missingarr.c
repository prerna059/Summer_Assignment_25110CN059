#include<stdio.h>
int main(){
     int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if(n<0){
        printf("Enter a positive element.");
        return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max, min;
    max=(arr[0]>arr[1])?arr[0]:arr[1];
    min=(arr[0]<arr[1])?arr[0]:arr[1];
    for(int i=0; i<n; i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    int i, j;
    char missing='n';
    for( j=min; j<=max; j++) {
    for( i=0;i<n; i++) {
        if(j==arr[i]){
            break;
        }
      }
      if(i==n && j>min && j<max ) {
        printf("The missing element is %d", j);
        missing=(int)j;
      }
   }
   
  if(missing=='n') {
    printf("No missing elements.");
 }
  return 0;
}
    
