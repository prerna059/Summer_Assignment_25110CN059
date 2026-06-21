#include<stdio.h>
int main(){
     int n1, n2;
    printf("Enter the size of array 1 and array 2 respectively: ");
    scanf("%d%d", &n1, &n2);
    //negative input handle
    if(n1<0 || n2<0){
        printf("Invalid inputs.");
        return 0;
    }
    //arrays input
    int arr1[n1];
    for(int i=0; i<n1; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
     int arr2[n2];
     for(int i=0; i<n2; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
      }
    //common elements store 
      int n=(n1<n2)?n1:n2;
      for(int j=0; j<n; j++) {    
            if(arr1[j] == arr2[j]) {
                printf("%d ", arr1[j]);           
            }  
        }
   return 0;
}      
           
