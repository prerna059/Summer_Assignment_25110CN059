#include<stdio.h>
#include<string.h>
int main() {
    char str[500];
    int freq[256] = {0};   
    int max = 0;
    unsigned char maxChar;

   puts("Enter first string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    for(int i = 0; str[i] != '\0'; i++){
        unsigned char ch = str[i];
        freq[ch]++;
      if(freq[ch]>max){
            max = freq[ch];
            maxChar=ch;
        }
    }

    if(max>0){
        printf("Maximum occurring character: %c", maxChar);
    }
    else{
        printf("Empty string");
    }

    return 0;
     }
