#include<stdio.h>
#include<math.h>
int main()
{
    int n, count=0;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n==0){
        count=1;
    }
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The total number of digits are %d", count);

    return 0;
}