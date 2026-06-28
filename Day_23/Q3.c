#include <stdio.h>
#include <string.h>

int main() {
    char str1[500], str2[500];
    int freq[256] = {0};  

    puts("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str[strcspn(str1, "\n")] = '\0'; 
  
    puts("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str[strcspn(str2, "\n")] = '\0'; 
    
    for(int i=0; str1[i] != '\0'; i++){
        unsigned char ch = str1[i];
        freq[ch]++;
    }

    for(int i= 0; str2[i] != '\0'; i++){
        unsigned char ch = str2[i];
        freq[ch]--;
    }

    for(int i = 0; i < 256; i++){
        if (freq[i] != 0) {
            printf("The strings are not anagrams.");
            return 0;
        }
    }

    printf("The strings are anagrams.");
    return 0;
}

