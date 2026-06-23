#include<stdio.h>

int main() 
{
    int r, c;
    printf("Enter the row and column size respectively: ");
    scanf("%d%d", &r, &c);

    if(r<=0 || c<=0) {
        printf("Enter a positive value only.");
        return 0;
    }

    int arr[r][c], sum_arr[r];
    
    for(int i = 0; i<r; i++) {
        int sum = 0;
    for(int j = 0; j<c; j++) {
        printf("Enter element (%d,%d): ", i+1, j+1);
        scanf("%d", &arr[i][j]);
        sum=sum+arr[i][j];
        }
         sum_arr[i] = sum;
    }

    for(int i = 0; i<r; i++) {
        printf("%d ", sum_arr[i]);
    }

    return 0;
    }
