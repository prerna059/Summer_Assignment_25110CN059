#include<stdio.h>
#include<math.h>
int sum (int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", sum(num) );
    return 0;
}

int sum (int n){
    int sumofn;
    if(n==0) return 0;
    sumofn= n%10 + sum(n/10);
    return sumofn;
    
}