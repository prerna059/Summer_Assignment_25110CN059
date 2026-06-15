#include<stdio.h>
int freq_search(int search, int array[], int n);
int main(){
    //frquency of an element
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
   if(n<=0){
    printf("Enter a positive number for size.");
    return 0;
   }
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
      
    }
     int a, frequency=0;
    printf("Enter an element to search the frequency of:");
    scanf("%d", &a);
   freq_search(a, arr, n);
   return 0;

}
int freq_search(int search, int array[], int n){
   int frequency=0;
    for(int j=0; j<n; j++){
        if(array[j]==search){
            frequency++;
        }
    }
     if(frequency==0){
        printf("The entered element doesn't exist.");
    }
    else{
    printf("The frquency of %d is %d", search, frequency);
    }
  
    return frequency;
}


