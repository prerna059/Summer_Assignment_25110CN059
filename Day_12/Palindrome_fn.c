#include<stdio.h>
void palindrome(int a);
int main(){
   int n;
    printf("Enter the number :");
    scanf("%d", &n);
  palindrome(n);
return 0;
}
void palindrome(int a){
a=(a<0)?-a:a;
int number=a;
int reverse=0;
while(a!=0)
    {
       int r=a%10;
        reverse= reverse*10+r;
        a=a/10;
    }
    if(number==reverse)
    {
        printf("The number is palindrome number.");
    }
    else 
    {
        printf("The given number is not a palindrome number.");
    }
    return;
      }
