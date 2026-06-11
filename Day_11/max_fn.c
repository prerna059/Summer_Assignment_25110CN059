#include<stdio.h>
int max(int a, int b);
int main(){
  int a,b;
printf("Enter the first and second numbers: ");
  scanf("%d%d", &a, &b);
printf("The maximum of two numbers is %d", max(a,b);
return 0;
}
int max(int a, int b){
  int maximum=(a>b)?a:b;
return maximum;
}
