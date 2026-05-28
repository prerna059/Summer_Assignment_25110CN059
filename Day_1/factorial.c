#include<stdio.h>
#include<math.h>
int main()
{
    int n, factorial=1;
    printf("Enter the given number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        factorial=i*factorial;
    }
    printf("The factorial of the given number is %d", factorial);
    return 0;
}