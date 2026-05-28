#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum=0;
    printf("Enter the no:");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("The sum of n natural numbers is %d", sum);
    return 0;
}