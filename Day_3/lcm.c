#include<stdio.h>
#include<math.h>
int main ()
{
    int gcd, a, b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    a=(a<0)?-a:a;
    b=(b<0)?-b:b;
    int min = (a>b)?b:a;

    for (int i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    int lcm = a*b/gcd;
    printf("The lcm of two numbers is %d", lcm);
    return 0;
}
