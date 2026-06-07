#include<stdio.h>
#include<math.h>
int factorial(int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", factorial(num) );
    return 0;
}

int factorial(int n){
    int fact;
    if(n==1) return 1;
    fact= n*factorial(n-1);
    return fact;
    
}