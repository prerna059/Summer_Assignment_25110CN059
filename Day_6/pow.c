#include<stdio.h>
#include<math.h>
int main(){
    float b, product=1;
    int p ;
    printf("Enter the base and power: ");
    scanf("%f%d", &b, &p);
    float temp1=b;
    int temp2=p;
    //case of negative base
    b=(b<0)?-b:b;
    //case of negative power after dealing w whatever base
    if(p<0){
        b=1/b;
        p=-p;
    }
    for(int i=1;i<=p; i++){
       product=product*b;
    }
    //justice to negative base
     product=(temp1<0 && temp2%2!=0)? -product: product;
     printf("%f to the power %d is %f", b, p, product);
     return 0;
}
    
