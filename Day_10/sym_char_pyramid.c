#include<stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    size=(size<0)?-size:size;
   
    for(int i=1; i<=size; i++)
    {   
        char c='A';
       char temp=c;
        for(int j=1;j<=size-i; j++){
         printf(" ");
        }
        for (int k=1; k<=(2*i-1);k++){
           if(k<=((2*i-1)/2+1)){
            printf("%c",c);
            c++;
        }
        else if(k>((2*i-1)/2+1 && k<=2*i-1)){
            printf("%c", temp);
            temp++;
        }
    }
        
        printf("\n");
    }
 return 0;

}
