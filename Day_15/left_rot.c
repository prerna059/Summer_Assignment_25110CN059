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
  int l;
  printf("Enter the number of rotations to the left: ");
  scanf("%d", &l);
  if(l<0){
    printf("Please enter positive number.");
    return 0;
}

//right-shift by r number of times.
for(int i=1; i<=l; i++) {
    int temp = arr[0];
for(int j=0; j<n-1; j++) {
    arr[j]=arr[j+1];
}
arr[n-1]=temp;
}
printf("The array rotated by %d:\n", l);
for(int k=0; k<n; k++) {
printf("%d ", arr[k]);
}

    return 0;
}