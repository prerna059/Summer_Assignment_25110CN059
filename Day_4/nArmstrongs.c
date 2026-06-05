#include<stdio.h>
#include<math.h>
int main()
{
long int  l,u;

printf("Enter lower limit:");
scanf("%ld",&l);
printf("Enter upper limit:");
scanf("%ld", &u);
long int temp=u;
if(l>u){
    u=l;
    l=temp;
}
int r;
printf("Armstrong numbers:");
for(long int i = l; i<=u; i++){
    int sum=0, count=0;
    int temp1=i;
   // int count=(int)log10(i)+1;
    if(i==0){
        count=1;
    }
    while(i!=0)
    {
        i=i/10;
        count++;
    }
    i=temp1;
     while(i!=0)
    {
       int r=i%10;
        if(r<0){
            break;
        }
        sum= sum+pow(r, count);
        i=i/10;
    }
    i=temp1;
    if(sum==i){
        printf(" %ld ", i);
    }
    
}
return 0;
}


