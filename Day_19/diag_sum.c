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


    int sum = 0;
    int n=(r<c)?r:c; //for rectangle case
    printf("The diagonal sum is ");
    //primary diagonal
    for(int i = 0; i<n; i++ ) {
            sum=sum+arr[i][i];
            arr[i][i]=0;//to avoid repeatition of same index element in sum
        }
    //secondary diagonal
    for(int i = 0; i<n; i++ ){
        sum=sum+arr[i][(c-1)-i]; //secondary diagonal has 0,1,..(ie,=i) distance resp. as it continues downwards with i th row (i+1 for us)
                                 //c-1 as last index is c-1 instead of c which is size.
        }
        /*for when only square mat is considered and there is a case of same element addition.
        if(r == c && n%2!=0) {//odd square mat will have middle element added twice.
         sum=sum-arr[n/2][n/2];
        }*/


printf("%d", sum);


return 0;

}