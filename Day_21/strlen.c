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
    scanf(" %[^\n]", str); // after scanfing 'n', dis scanf reads the \n newline char in input buffer & leads to be taken as input (so we add a space to avoid it) 
   int count=0;
while(str[count] != '\0'){
        count++;
    }
printf("Length of the string is: %d", count);

    return 0;
}
