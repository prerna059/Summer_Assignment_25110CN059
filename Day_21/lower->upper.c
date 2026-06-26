#include<stdio.h>
#include<string.h>
int main()
{
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
  
    for(int i=0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }

    puts("Uppercase string: ");
    puts(str);
    return 0;
}
