#include<stdio.h>
int fact(int a);
int main(){
  int n;
printf("Enter the number: ");
scanf("%d", &n);
  if(n<0){
    printf("Factorial of a negative number does not exist.");
  }
    else{ 
      printf("The factorial of %d is %d", n, fact(n));
    }
return 0;
}
int fact (int a){
  if(a==0 || a==1) return 1;
return a*fact(a-1);
}
