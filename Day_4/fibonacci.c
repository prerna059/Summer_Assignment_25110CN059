
#include<stdio.h>
#include<math.h>
int main()
{
    int n, term1 = 0, term2=1, term3;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid number");
    }
    
    for(int i = 1; i<=n; i++)
    {
         if(i==1){
            printf("%d", term1);
            continue;
        }
       else if(i==2){
            printf("%d",term2);
            continue;
        }
        
        term3=term1+term2;
        term1=term2;
        term2=term3;
      
        printf("%d ", term3);
    }
     return 0;
}    
        
        
      

      

   
