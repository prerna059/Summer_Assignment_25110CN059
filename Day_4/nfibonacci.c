#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    int fibo[n];

     fibo[0]=0;

     fibo[1]=1;

   
    for(int i = 2; i<=n; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
        
      }
printf("The nth term of the series is %d", fibo[n-1]);
    return 0;
}
