#include<stdio.h>

int main()
{
int  l,u, flag = 0;
printf("Enter lower limit:");
scanf("%d",&l);
printf("Enter upper limit:");
scanf("%d", &u);
int temp=u;
if(l>u){
    u=l;
    l=temp;
}
int p;
int n;
printf("The prime numbers between %d and %d: ", l, u);
for (int n=l; n<=u; n=n+1)
{
  p=1;
 if(n<2){
      p=0;
   }
    
 for(int i = 2 ; i<=n-1; i++)
     {
        if (n%i==0){
           p= 0;
           break;
           }
        }
 if(p==1){
         printf("%d ", n);
      }
}
return 0;
}
