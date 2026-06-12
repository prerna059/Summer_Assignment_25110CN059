#include<stdio.h>
#include<math.h>
void perfect(int a);
int main(){
  int n;
printf("Enter a number: ");
scanf("%d", &n);
perfect(n);
return 0;
}
void perfect(int a){
int sum=0;
if(a<0){
printf("Not a perfect number");
  return;
}
else{
 for(int i=1; i<=a/2; i++){// no divisor is greater than half of number, also *proper divisor don't include the number itself
if(a%i==0){
sum=sum+i;
}
}
if(sum==a){
printf("The number is perfect.");
  }
  else{
printf("The number is not perfect.");
  }
return;
}
}


