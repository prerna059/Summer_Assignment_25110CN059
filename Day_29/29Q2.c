#include <stdio.h>

#define SIZE 100

int main(){

    int arr[SIZE], n=0, choice, pos, element, i, found;

    do {
        printf("\n--- Menu Driven Array Operations ---\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Search element\n");
        printf("4. Display array\n");
        printf("5. Reverse array\n");
        printf("6. Largest element\n");
        printf("7. Smallest element\n");
        printf("8. Sum of the elements\n");
        printf("9. Average of the elements\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                if(n>=SIZE){
                    printf("Array is full!\n");
                } 
                else{
                    printf("Enter element to insert: ");
                    scanf("%d", &element);
                    printf("Enter position: ");
                    scanf("%d", &pos);

                    if(pos<1 || pos>n+1){
                        printf("Invalid position!\n");
                    } 
                    else{
                        for(i=n; i>=pos; i--){
                            arr[i]=arr[i-1];
                        }
                        arr[pos-1]=element;
                        n++;
                        printf("Element inserted successfully.\n");
                    }
                }
                break;

            case 2: 
                if(n==0){
                    printf("Array is empty!\n");
                } 
                else{
                    printf("Enter position to delete.");
                    scanf("%d", &pos);

                    if(pos<1 || pos>n){
                        printf("Invalid position!\n");
                    } 
                    else{
                        printf("Deleted element: %d\n", arr[pos-1]);
                        for (i=pos-1; i<n-1; i++) {
                            arr[i] = arr[i+1];
                        }
                        n--;
                    }
                }
                break;

            case 3: 
                if(n==0){
                    printf("Array is empty!\n");
                } 
                else{
                    printf("Enter element to search: ");
                    scanf("%d", &element);
                    found = 0;
                    for (i=0; i<n; i++) {
                        if(arr[i] == element){
                            printf("Element found at %d.\n", i + 1);
                            found= 1;
                            break;
                        }
                    }
                    if(!found){
                        printf("Element not found.\n");
                    }
                }
                break;

            case 4:
                if(n==0){
                    printf("Array is empty!\n");
                } 
                else{
                    printf("Array elements: ");
                    for(i=0; i<n; i++){
                        printf("%d\n", arr[i]);
                    }
                }
                break;

            case 5:
                for(int i=0, j=n-1; i<j; i++, j--){
                    int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
                printf("The array reversed: ");
                for(int k=0; k<n; k++) {
                printf("%d ", arr[k]);
                }
                printf("\n");
                break;
                    
            case 6:
                if(n==0){
                    printf("Array is empty!\n");
                } 
                else{
                    int max = arr[0];
                    for(i=1; i<n; i++){
                    if(arr[i]>max){
                    max=arr[i];
                   }
                }
                printf("Largest element = %d\n", max);
                }
                break;

            case 7: 
                if(n==0){
                    printf("Array is empty!\n");
                }
                else{
                    int min=arr[0];
                for(i=1; i<n; i++){
                    if (arr[i]<min) {
                    min=arr[i];
                    }
                }
                printf("Smallest element = %d\n", min);
                }
                break;

            case 8:
                if(n==0){
                    printf("Array is empty!\n");
                } 
                else{
                    int sum=0;
                    for(i=0; i<n; i++) {
                    sum=sum+arr[i];
                    }
                printf("Sum of elements = %d\n", sum);
                }
                break;

            case 9: 
                if(n==0){
                    printf("Array is empty!\n");
                }
                 else{
                    int sum = 0;
                    for(i=0; i<n; i++) {
                    sum += arr[i];
                    }
                float avg = (float)sum / n;
                printf("Average of elements = %f\n", avg);
                }
                break;

            case 10:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=10);

    return 0;
}
