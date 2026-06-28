#include<stdio.h>

 void sort (int n, int arr[]) ;
int main(){
     int n1, n2;
    printf("Enter the size of array 1: ");
    scanf("%d", &n1);
    if(n1<0){
        printf("Enter a positive element.");
        return 0;
    }
    int arr1[n1];
    for(int i=0; i<n1; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    sort(n1, arr1);

     printf("Enter the size of array 2: ");
    scanf("%d", &n2);
    if(n2<0){
        printf("Enter a positive element.");
        return 0;
    }
    int arr2[n2];
     for(int i=0; i<n2; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
    }

    sort(n2, arr2);
    
    int arr_merge[n1+n2];
    for(int j=0; j<n1; j++) {
         arr_merge[j]= arr1[j];
    }
    for( int j=0; j<n2; j++) {
    arr_merge[j+n1] = arr2[j];
    }
    printf("The merged array is:\n");
    for(int k=0; k<n1+n2; k++) {
        printf("%d ",arr_merge[k] );
    }
    return 0;
}
            void sort (int n, int arr[]) {
    for(int i = 1; i<n; i++) {
        for(int j = 0; j<=n-i-1; j++) {
               if(arr[j] > arr[j+1]) {
                    int temp=arr[j];
                    arr[j]=arr[j + 1];
                    arr[j + 1]=temp;
               }
            }
        }
return;
}
