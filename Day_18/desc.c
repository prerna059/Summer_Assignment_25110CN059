#include<stdio.h>
void array_input (int n, int arr[]);
void array_print (int n, int result_arr[]);// with frequency of one kind =1
int main() 
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    if(n<0){
        printf("Enter a positive element.");
        return 0;
    }

    int arr[n];
    array_input (n, arr);

   
    for (int i=0; i<n; i++) {
       for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
     }

    printf("The sorted array in descending order:\n");
    array_print(n, arr);
   
return 0;
}
void array_input (int n, int arr[]) {
  for(int i = 0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    return;
}
void array_print (int n, int result_arr[]) {
    printf("%d ", result_arr[n-1]);
    for(int j = n-2; j >= 0; j--) {
        for(int k = n-1; k > j; k--) {
            if(result_arr[j] == result_arr[k]) {
                break;
            }
            else if(result_arr[j]!= result_arr[k] && k==j+1) {
        printf("%d ", result_arr[j]);
           }
        }
    }
    
    return; 
}

