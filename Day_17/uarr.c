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
    for(int i=0; i<n1; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
     int arr2[n2];
     for(int i=0; i<n2; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
      }
 //all elements in one array,i.e, arr_merge 
     int arr_merge[n1+n2];
    for(int j=0; j<n1; j++) {
         arr_merge[j]= arr1[j];
    }
    for( int j=0; j<n2; j++) {
    arr_merge[j+n1] = arr2[j];
    }
 //removal of recurring elements by nested loops.   
    int k, j, index=1;
    int uarr[n1+n2];
    uarr[0] = arr_merge[0];
    for(j = 1; j<n1+n2; j++) {
      for(k=0; k<index; k++){
        if(arr_merge[j]==uarr[k]){
            break;
        }
        else if(arr_merge[j]!=uarr[k] && k==index-1){
             uarr[index++]=arr_merge[j];
        }
      }
    }
     for(int i=0; i<index; i++){
        printf("%d ", uarr[i]);
     }
    
    return 0;
}