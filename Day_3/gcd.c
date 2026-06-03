#include<stdio.h>
#include<math.h>
int main()
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
         gcd=i; //the loop will terminate at the largest number(since i++) that divides both a and b to give 0, thus that value of i at which it terminates will be gcd
        }
    }
printf("The gcd of two numbers is %d", gcd);

    return 0;
}
