#include<stdio.h>
#include<math.h>
int main()
{
    int n, r, reverse = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    int number=n;
    while(n!=0)
    {
        r=n%10;
        reverse= reverse*10+r;
        n=n/10;
    }
    if(number==reverse)
    {
        printf("The number is palindrome number.");
    }
    else 
    {
        printf("The given number is not a palindrome number.");
    }
    return 0;
}

