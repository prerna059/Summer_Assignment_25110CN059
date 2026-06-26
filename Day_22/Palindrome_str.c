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
    scanf(" %[^\n]", str); 

    int len=strlen(str);
    int flag=1;
    for(int i= 0; i<len/2; i++) {
        if(str[i] != str[len-i-1]) {
        printf("The string is NOT a palindrome.");
        flag = 0;
         break;
        }
    }

    if (flag==1)
        printf("The string \"%s\" is a palindrome.", str);
return 0;
  }
