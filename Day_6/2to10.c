
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int temp2=n;
    int decimal=0, b=1;
     while (n!=0) {
        int r=n%10;     
        decimal=r*b+decimal;  
        b=b*2;              
        n=n/10;         
    }
    n=temp2;
    printf("The decimal form of %d is %d", n, decimal);
    return 0;
}
