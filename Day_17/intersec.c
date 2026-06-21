#include<stdio.h>
//n^2+n^2
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
    int arr_new[n1], index=0;
      for(int j=0; j<n1; j++){
        for(int k=0; k<n2; k++){     
            if(arr1[j] == arr2[k]){
                arr_new[index] = arr1[j];
                index++;
            }  
        }
    }
    //filtering duplicates and final output
        printf("%d ", arr_new[0]);
    for(int j = 1; j < index; j++) {
        for(int k = 0; k < j; k++) {
            if(arr_new[j] == arr_new[k]) {
                break;
            }
            else if(arr_new[j]!= arr_new[k] && k==j-1) {
        printf("%d ", arr_new[j]);
           }
        }
    }
    
    return 0;
}      
           