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
    int max1, max2;
    max1=(arr[0]>arr[1])?arr[0]:arr[1];
    max2=(arr[0]>arr[1])?arr[1]:arr[0];
    for(int j=1; j<n; j++){
        if(arr[j]>max1){
            max2=max1;
            max1=arr[j];
        } 

      else if(arr[j]>max2 && arr[j]!=max1){
            max2=arr[j];
        }
    }
    if(max1==max2){
        printf("All elements are equal.");
    }
        else{
            printf("The second largest number is %d", max2);

        }
        return 0;
    }
    
