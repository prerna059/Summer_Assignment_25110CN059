#include<stdio.h>
#include<math.h>
int main()
{
    int n, table;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The Table of given number is :\n");
    for (int i = 1; i<=10; i++)
    {
       table=n*i;
       printf("%d * %d = %d\n",n,i, table);
    }
    
    return 0;
}