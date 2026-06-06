#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int temp2=n;
    n=(n<0)?-n:n;
    int temp=n;
    
    int count=0;
    if(n==0){
        printf("The binary form of 0 is 0");
    }
    while(temp!=0)
    {
     int r=temp%2;
     temp/=2;
     count++;
    }
    int binary[count];
   for(int i=count-1; i>=0;i--){
    binary[i]=n%2;
    n=(n-binary[i])/2;
   }
    
    n=temp2;
    printf("The binary form of %d is ", n);
  
    for(int j=0; j<=count-1; j++){
        printf("%d", binary[j]);
    }

    
    return 0;
}

