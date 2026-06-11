
#include<stdio.h>
int sum(int a, int b);
int main(){
  int a,b;
printf("Enter the first and second numbers: ");
  scanf("%d%d", &a, &b);
printf("The sum of two numbers is %d", sum(a,b));
return 0;
}
int sum(int a, int b){
  return a+b;
}
