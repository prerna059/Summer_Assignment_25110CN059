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

    printf("Character frequencies are as follows:\n");
    for(int i=0; i<256; i++){
        if(freq[i]>0){
            printf("'%c': %d\n", i, freq[i]);
        }
    }

    return 0;
}

