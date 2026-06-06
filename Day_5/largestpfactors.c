#include<stdio.h>
#include<math.h>
int main() {
int n, p;
printf("Enter the number: ");
scanf("%d", &n);
    while (n%2==0) {
        p=2;
        n=n/2;
    }
    for(int i=3; i<=n; i=i+2)
    {
        while(n%i==0){
           p=i;
           n=n/i;
        }
    }
    if (n>2) {
        p=n;
    }
    printf("The largest prime factor of the number is: %d", p);
    return 0;
}