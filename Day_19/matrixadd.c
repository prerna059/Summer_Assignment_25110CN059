#include<stdio.h>

int main() 
{
    int r1, c1;
    printf("Enter the row and column size of 1st matrix respectively: ");
    scanf("%d%d", &r1, &c1);
    int r2, c2;
    printf("Enter the row and column size of 2nd matrix respectively: ");
    scanf("%d%d", &r2, &c2);
    if(r1<0 || c1<0 || r2<0 || c2<0) {
        printf("Enter a positve value only.");
        return 0;
    }
    if(r1!=r2 && c1!=c2) {
        printf("Matrix of different order cannot be added.");
        return 0;
    }
    int arr1[r1][c1];
    for(int i = 0; i<r1; i++) {
    for(int j = 0; j<c1; j++) {
        printf("Enter element (%d,%d): ", i+1, j+1);
        scanf("%d", &arr1[i][j]);
    }
    }
    int arr2[r2][c2];
    for(int i = 0; i<r2; i++) {
    for(int j = 0; j<c2; j++) {
        printf("Enter element (%d,%d): ", i+1, j+1);
        scanf("%d", &arr2[i][j]);
    }
    }

printf("The sum matrix:\n");
for(int i = 0; i<r1; i++) {
    for(int j = 0; j<c1; j++) {
     printf("%d ", arr1[i][j]+arr2[i][j]);
    }
    printf("\n");
}
return 0;
}
