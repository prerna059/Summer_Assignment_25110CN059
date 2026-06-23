#include<stdio.h>
// AxB and BxA both
void mat_product (int R1, int C1, int ARR1[R1][C1], int R2, int C2, int ARR2[R2][C2]);
int main() 
{
    int r1, c1;
    printf("Enter the row and column size of 1st matrix respectively: ");
    scanf("%d%d", &r1, &c1);
    int r2, c2;
    printf("Enter the row and column size of 2nd matrix respectively: ");
    scanf("%d%d", &r2, &c2);

    if(r1<=0 || c1<=0 || r2<=0 || c2<=0) {
        printf("Enter a positive value only.");
        return 0;
    }

    if(c1!=r2 && r1!=c2) {
        printf("Cannot be multiplied because column of first matrix is not equal to row of the second.");
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
    if(c1 == r2) {
    printf("Product of Mat1 * Mat2:\n"); 
    mat_product(r1, c1, arr1, r2, c2, arr2);
    }
      
    if(r1 == c2) {
    printf("Product of Mat2 * Mat1:\n"); 
    mat_product(r2, c2, arr2, r1, c1, arr1);
    }

    return 0;
}
    void mat_product(int R1, int C1, int ARR1[R1][C1], int R2, int C2, int ARR2[R2][C2]) {
        
    for(int i=0; i<R1; i++) {
        for(int k = 0; k<C2; k++){
                int sum = 0;
            for(int j=0; j<C1/*or j<r2*/; j++) {
          
                sum = sum+ARR1[i][j]*ARR2[j][k];

            }
        printf("%d ", sum);
        }
    printf("\n");
    }
}

