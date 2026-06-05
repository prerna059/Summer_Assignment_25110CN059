#include<stdio.h>
#include<math.h>
int main()
{
    int n, r, count=0;
    long int sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    int temp=n;//using loop further in the code will mannipulate the entered value for n
    if(n==0){
        count=1;
    }
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=temp;
    while(n!=0)
    {
        r=n%10;
        if(r<0){
            break;}
        sum= sum+pow(r,count);
        n=n/10;
    }
    n=temp;
    if(sum==n || n==0){
        printf("The entered number is armstrong");
    }
else{
    printf("The entered number is not an Armstrong number");
}
return 0;
}
