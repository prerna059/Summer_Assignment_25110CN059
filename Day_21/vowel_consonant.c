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
  
    int vowel = 0, consonant = 0;
    for(int i = 0; str[i] != '\0'; i++) {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
      {
      if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' || str[i] == 'U')
      {
           vowel++;
      }
      
       else {
        consonant++;
       }
    }
  }
  printf("The number of consonants in the string is %d.\n", consonant);
   printf("The number of vowels in the string is %d.\n", vowel);
    return 0;
}
