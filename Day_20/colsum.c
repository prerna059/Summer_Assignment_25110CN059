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

    int arr[r][c];

    for(int i = 0; i<r; i++) {
    for(int j = 0; j<c; j++) {
        printf("Enter element (%d,%d): ", i+1, j+1);
        scanf("%d", &arr[i][j]);
        }
    }

    printf("The sum of column elements respectively are:\n");
    for(int i = 0; i<c; i++) {
        int sum = 0;
        for(int j = 0; j<r; j++) {
        sum=sum+arr[j][i];
        }
      printf("%d ", sum);
    }

    return 0;
    }
