#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if(n<0){
        printf("Enter a positive elemnt.");
        return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int search;
    printf("Enter an element you want to search: ");
    scanf("%d", &search);
   
    for(int j=0; j<n; j++){
        if(arr[j]==search){
        printf("The index that holds the searched element: %d", j);
        break;//simple linear search, for modified break not needed.
         }
         if(arr[n-1]!=search){
            printf("Not found.");
            break;
        }
    }
      return 0;
}
