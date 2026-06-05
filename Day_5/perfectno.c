#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

      for(int i =1 ; i<n; i++)
    {
        if (n%i==0){
           sum=sum+i;
        }
    }
    if(n==sum){
        printf("The number is perfect");
    }
    else{
        printf("The number is not perfect");
    }
return 0;

}