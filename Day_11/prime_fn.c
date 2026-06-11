#include<stdio.h>
#include<math.h>
void prime(int a);

int main(){
  int n;
printf("Enter a number:");
scanf("%d", &n);
prime(n);
return 0;
}
void prime(int a){
 if(a<=1)
{
    printf("%d is not prime", a);
}

else if (a>1)
  {
    int count=0;
   for(int i =1 ; i<=a; i++)
    {
        if (a%i==0){
           count++;
        }
   }
if (count > 2)
  {
     printf("%d is not prime", a);
  }
else
  {
     printf("%d is a prime number", a);
  }
 }
return;
}

  
