#include<stdio.h>

int main() 
{
    int r, c;
    printf("Enter the row and column size respectively: ");
    scanf("%d%d", &r, &c);

    if(r<0 || c<0) {
        printf("Enter a positve value only.");
        return 0;
    }
   
    int arr[r][c];
    for(int i = 0; i<r; i++) {
    for(int j = 0; j<c; j++) {
        printf("Enter element (%d,%d): ", i+1, j+1);
        scanf("%d", &arr[i][j]);
    }
    }
   

printf("The transpose matrix:\n");
for(int i = 0; i<c; i++) {
    for(int j = 0; j<r; j++) {
     printf("%d ", arr[j][i]);
    }
    printf("\n");
}
return 0;
}