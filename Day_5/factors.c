#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    n=(n<0)?-n:n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0){
          printf("%d ", i );
        }
    }
    return 0;
}