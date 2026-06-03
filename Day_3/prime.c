
#include<stdio.h>
 
int main()
{
int  n, flag = 0;
printf("Enter a number to be checked ");
scanf("%d",&n);

if(n<=1)
{
    printf("%d is not prime", n);
}

else if (n>1)
 {
   for(int i =1 ; i<=n; i++)
    {
        if (n%i==0){
           flag++;
        }

    }

  if (flag > 2)
  {
     printf("%d is not prime", n);
  }
  else
  {
     printf("%d is a prime number", n);
  }
 }
else 
{
    printf("Entered number is not valid");
}
  return 0;
}



  