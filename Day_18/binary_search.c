#include<stdio.h>
void array_input (int n, int arr[]);
void sort (int n, int arr[]);

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
 
   sort(n, arr);  
   
   int search;
   printf("What do you want to search?\n");
   scanf("%d", &search);

   int low=0;
   int high=n-1;
   int found = 0;
//divide n conquer 
    while(low<=high) {
        int mid= low+((high-low)/2); //to avoid going beyond range of int size(known as overflow),in case arr size is veryy big.
        //(high-low -> distance between high and low) >> (/2 -> half of t.distance) >> (+low -> position)  

        if(arr[mid] == search) {
            printf("The %d is in %d index.", search, mid); 
            found=1;
            break;
        }
    
        else if(arr[mid]<search) {
            low=mid+1;
        }
        
        else if(arr[mid]>search) {
            high= mid-1;
        }
    }
if(found == 0){
    printf("The searched element does not exist in the array.");
}
   

return 0;
}
void array_input (int n, int arr[]) 
{
   for(int i = 0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    return;
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
   
