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
  int r;
  printf("Enter the number of rotations to the right: ");
  scanf("%d", &r);
  if(r<0){
    printf("Please enter positive number.");
    return 0;
}

//right-shift by r number of times.
for(int i=1; i<=r; i++) {
    int temp = arr[n-1];
for(int j=n-1; j>0; j--) {
    arr[j]=arr[j-1];
}
arr[0]=temp;
}
printf("The array rotated by %d:\n", r);
for(int k=0; k<n; k++) {
printf("%d ", arr[k]);
}

    return 0;
}