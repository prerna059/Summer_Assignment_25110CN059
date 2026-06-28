#include<stdio.h>
#include<string.h>

int main(){
    char str1[500], str2[500];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1!=len2){
      printf("The strings are not the rotation of each other.");
       return 0;
    }

    for(int shift=0; shift<len1; shift++){
        int match=1;
        for(int i=0; i<len1; i++){
            if(str1[(i+shift) % len1]!= str2[i]) {
                match= 0;
                break;
            }
        }
        if(match =1){
            printf("String one is rotation of string 2.");
            return 0;
        }
    }

    printf("Not rotation.");
    return 0;
}
