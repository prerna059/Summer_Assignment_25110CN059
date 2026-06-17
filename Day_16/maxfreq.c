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
    int visited[n], frequency, max_freq=0;
    for(int i = 0; i<n; i++ ) {
      visited[i]=0;
    }
    for(int j=0; j<n; j++) {
        if(visited[j]==1) {
            continue;
        }
        frequency=1;
    for(int k=j+1; k<n; k++){
      if(arr[k]==arr[j]){
        frequency++;
        visited[k]=1;
      }
    }
    if(max_freq < frequency) {
         max_freq= frequency;
    }
}

    for(int j=0; j<n; j++) {
        if(visited[j]==1) {
           continue;
        }
        frequency=1;
    for(int k=j+1; k<n; k++){
      if(arr[k]==arr[j]){
        frequency++;
        visited[k]=1;
      }
    }
    if(frequency==max_freq) {
         printf("%d, ", arr[j]);
    }
}
printf("are the element(s) with maximum frequency.");
return 0;
}
