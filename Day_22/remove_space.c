#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
printf("Enter the string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
int i,j;
for(i = 0, j = 0; str[i] != '\0'; i++) {
  if (str[i] != ' ') { //the j below only increases & accepts value of str[i] when its not space,otw skips n j be same as the last time the condition was true
    str[j++] = str[i];  
    }
  }
    str[j] = '\0';  

printf("String without spaces: %s", str);

return 0;
}
