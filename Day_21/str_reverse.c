#include<stdio.h>
#include<string.h>
int main() {
  int n;
  printf("Enter a size for string: ");
  scanf("%d", &n);

  if(n<=0){
    printf("Entered value is not correct.");
    return 0;
  }

    char str[n];
    printf("Enter a string: ");
    scanf(" %[^\n]", str); // after scanfing n, dis one reads the \n newline char as input buffer n thus our string lost
   int count=0;
while(str[count] != '\0'){
        count++;
    }
   for (int i = count; i >= 0; i--) {
    printf("%c", str[i-1]);
   }
    return 0;
}
