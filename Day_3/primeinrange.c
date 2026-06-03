#include<stdio.h>
#include<stdbool.h>
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

for (int n=l; n<=u; n=n+1)
{
