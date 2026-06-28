#include<stdio.h>
#include<string.h>

int main(){
    char str[500];
    int freq[256]={0}; 
    char result[500];

    puts("Enter first string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int j=0;
    for(int i=0; str[i] != '\0'; i++){
        unsigned char ch = str[i];
        if(freq[ch] == 0){ 
            result[j++] = ch;
            freq[ch] = 1;      
        }
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s", result);

    return 0;
}
