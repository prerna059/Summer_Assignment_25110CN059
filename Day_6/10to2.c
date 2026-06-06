#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int temp=n;
    int temp2=n;
    int count=0;
    while(temp!=0)
    {
     int r=temp%2;
     temp/=2;
     count++;
    }
    int binary[count-1];
   for(int i=count-1; i>=0;i--){
    binary[i]=n%2;
    n/=n;
   }
    n=temp2;
    printf("The binary form of %d is ", n);
    for(int j=0; j<=count-1; j++){
        printf("%d", binary[j]);
    }
    
    return 0;
}
