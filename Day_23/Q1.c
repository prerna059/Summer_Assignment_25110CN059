//Find first non-repeating character
#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    int freq[256] = {0}; //256 ascii characters in c.

    puts("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    for(int i=0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];  //no negatives.
        freq[ch]++;
    }

   for(int i=0; str[i] != '\0'; i++){
        unsigned char ch = str[i];
        if(freq[ch] == 1){
            printf("First non-repeating character: '%c'", ch);
            return 0;
        }
    }

    printf("No non-repeating character found.");
    return 0;
}

