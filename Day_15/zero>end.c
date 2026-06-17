#include<stdio.h>
void newarr (int n, int arr[]);
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

   newarr(n, arr);
   
printf("The sorted array:\n");
for(int k=0; k<n; k++) {
    printf("%d ", arr[k]);
}
    return 0;
}
void newarr (int n, int arr[]) {
   int index=0;
    for (int i=0; i<n; i++) {
        if (arr[i]!=0) {
            arr[index++]= arr[i];
        }
    }
    while(index<n) {
        arr[index++]=0;
    }
    return;
}

