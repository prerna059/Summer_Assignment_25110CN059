#include<stdio.h>
#include<math.h>

    int factorial(int n);
    int main()
    {
        int a;
        
        printf("Enter a number: ");
        scanf("%d", &a);
        int temp=a;
        int i, r, sum=0;
        while(a!=0){
           r=a%10;
           sum=sum+factorial(r);
           a=a/10;
        }
      a=temp;
        if(a==sum){
            printf("The number is strong");
        }
        else{
            printf("The number is not strong");
        }
        return 0;
    }
    int factorial(int n){
        int factorial=1;
        for(int i=1; i<=n; i++){
            factorial=factorial*i;
        }
        return factorial;
    }
