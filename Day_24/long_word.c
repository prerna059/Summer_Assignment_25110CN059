#include<stdio.h>
#include<string.h>

int main(){
    char str[500];
    char longest[100];
    int len_max= 0;

    puts("Enter first string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i=0;
    while(str[i]!= '\0'){
    while(str[i] == ' ' && str[i] != '\0'){
            i++;
        }
        int start = i;
        int length = 0;
      while (str[i] != ' ' && str[i] != '\0') {
            length++;
            i++;
        }

        if(length>len_max){
            len_max=length;
            strncpy(longest, &str[start], length);
            longest[length]= '\0'; //terminate word
        }
    }

    if (len_max>0){
        printf("Longest word: %s", longest);
    }
    else{
        printf("No words found.");
    }

    return 0;
    }
