#include<stdio.h>
#include<math.h>
int recrev(int n, int rev);

int main(){
     int num, reverse;
    printf("Enter a number: ");
    scanf("%d", &num);
    num=(num<0)?-num:num;
    reverse= recrev(num, 0);
    printf("%d", reverse);
    return 0;
}

int recrev(int n, int rev){
   
   if(n==0) return rev;
   rev= (rev*10)+(n%10);
   return recrev(n/10, rev);
}