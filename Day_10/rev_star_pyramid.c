#include<stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    size=(size<0)?-size:size;
   
    for(int i=size; i>=1; i--)
    {
        for(int j=1;j<=size-i; j++){
         printf(" ");
        }
        for (int k=1; k<=2*i-1;k++){
            printf("*");
        }
        
        printf("\n");
    }
 return 0;

}
