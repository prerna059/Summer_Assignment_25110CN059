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
    if(r != c) {
        printf("Unequal number of rows and columns, thus asymmetric.");
        return 0;
    }

    int arr[r][c];
    for(int i = 0; i<r; i++) {
    for(int j = 0; j<c; j++) {
        printf("Enter element (%d,%d): ", i+1, j+1);
        scanf("%d", &arr[i][j]);
    }
    }
  
int n = r, sym = 1; 
    for(int i = 0; i<n; i++) {
       for(int j = 0; j<n; j++) {
        if(arr[i][j] != arr[j][i]) {
        sym = 0;
        break;
        }
      }

        if(sym == 0) {
        printf("Not symmetric.");
        break;
        }
   }

if(sym == 1) {
 printf("The matrix is symmetric.");
}

return 0;
}

