#include<stdio.h>
#include<math.h>
int main()
{
    int n, r, reverse=0;
    printf("Enter the number :");
    scanf("%d", &n);
    while(n>0)//Correction: n!=0 as negative case is also included by doin dis
    {
        r=n%10;
        reverse= reverse*10+r;
        n=n/10;
    }
    printf("The reverse of the number is %d",reverse);
    return 0;
}
