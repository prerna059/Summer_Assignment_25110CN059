#include<stdio.h>
int fibo(int a);
int main(){
  int n;
printf("Enter a number: ");
scanf("%d", &n);
  n=(n<0)?-n:n;
   printf("The fibonacci series upto n terms:");
for(int i=1; i<=n; i++){
   printf("%d ", fibo(i));
}
return 0;
}
int fibo(int a){
if(a==1) return 0;
if(a==2) return 1;
return fibo(a-1)+fibo(a-2);
  }
