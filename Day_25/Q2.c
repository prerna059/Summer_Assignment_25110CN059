#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    int freq1[256]={0}, freq2[256]={0};
    char common[256];
    int j=0;

    puts("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    puts("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    for(int i=0; str1[i] != '\0'; i++){
        unsigned char ch=str1[i];
        freq1[ch]=1;
    }

    for(int i=0; str2[i]!= '\0'; i++){
        unsigned char ch= str2[i];
        freq2[ch]=1;
    }

    for(int i=0; i<256; i++){
        if(freq1[i] && freq2[i]){
            common[j++] = (char)i;
        }
    }
    common[j]= '\0';

    if(j>0){
    printf("Common characters: ");
    for(int k=0; k<j; k++){
        printf("%c ", common[k]);
    }
    }
     else {
    printf("No common characters.");
}
 return 0;
}
