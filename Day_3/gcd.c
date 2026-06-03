#include<stdio.h>
#include<math.h>
int main()
{
    int gcd, a, b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    int min = (a>b)?b:a;
    gcd=1;
    for (int i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
printf("The gcd of two numbers is %d", gcd);

    return 0;
}