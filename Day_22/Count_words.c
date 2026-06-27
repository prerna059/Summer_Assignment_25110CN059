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
  
    int count = 1; // for the very first word
    int sentence = 1;
   for(int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ') {
            count++;
        }
        else if (str[i] == '.') {
            printf("The number of words in sentence %d is: %d\n", sentence, count);
            sentence++;
            count = 0;
        }
    }

    
return 0;
}
