#include<stdio.h>
#include<math.h>
void armstrong(int a);
int main(){
  int n;
printf("Enter a number: ");
scanf("%d", &n);
armstrong(n);
return 0;
}
void armstrong(int a){
int temp=a, count=0, sum=0;
     while(a!=0)
    {
        a=a/10;
        count++;
    }
    a=temp;
    while(a!=0)
    {
        int r=a%10;
        if(r<0){
            break;}
        sum= sum+pow(r,count);
        a=a/10;
    }
    a=temp;
    if(sum==a || a==0){
        printf("The entered number is armstrong");
    }
else{
    printf("The entered number is not an Armstrong number");
}
return;
}
