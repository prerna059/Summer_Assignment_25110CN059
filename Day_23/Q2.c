//Find first repeating character
#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];
    int freq[256] = {0}; //256 ascii characters in c.

    puts("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    for(int i=0; str[i] != '\0'; i++){
        unsigned char ch = str[i];//If a signed char as array index (freq[ch]),& char has a value>127(extended ASCII) or <0, it can produce a negative index>undefined behavior, memory corruption
        freq[ch]++;
    }

   for(int i=0; str[i] != '\0'; i++){
        unsigned char ch = str[i];
        if(freq[ch] > 1){
            printf("First repeating character: '%c'", ch);
            return 0;
        }
         }

    printf("No repeating character found.");
    return 0;
        }
