#include<stdio.h>
#include<math.h>
int recfib (int n);

int main(){
     int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num=(num<0)?-num:num;
    for(int i=0; i<=num; i++){
    printf("%d ", recfib(i));
    }
    return 0;
}

int recfib (int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    return recfib(n-1)+recfib(n-2);
   
}