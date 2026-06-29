#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
    char str[SIZE], str2[SIZE];
    int choice;

    do {
        printf("\n--- Menu Driven String Operations ---\n");
        printf("1. Input string\n");
        printf("2. Display string\n");
        printf("3. Length of string\n");
        printf("4. Copy string\n");
        printf("5. Concatenate strings\n");
        printf("6. Compare strings\n");
        printf("7. Reverse string\n");
        printf("8. Check palindrome\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();//delete newline

        switch(choice){
            case 1:
                printf("Enter a string: ");
                fgets(str, SIZE, stdin);
                str[strcspn(str, "\n")] = '\0';
                break;

            case 2:
                if(strlen(str) == 0){
                    printf("No string stored!\n");
                }
                else{
                    printf("Stored string: %s\n", str);
                }
                break;

            case 3:
                printf("Length of string = %lu\n", strlen(str));
                break;

            case 4:
                strcpy(str2, str);
                printf("Copied string: %s\n", str2);
                break;

            case 5:
                printf("Enter another string: ");
                fgets(str2, SIZE, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcat(str, str2);
                printf("Concatenated string: %s\n", str);
                break;

            case 6:
                printf("Enter another string: ");
                fgets(str2, SIZE, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if(strcmp(str, str2) == 0){
                    printf("Strings are equal.\n");
                }
                else{
                    printf("Strings are not equal.\n");
                }
                break;

            case 7: {
                int len=strlen(str);
                for(int i=0, j=len-1; i<j; i++, j--){
                    char temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                }
                printf("Reversed string: %s\n", str);
                break;
            }

            case 8: {
                if(strlen(str) == 0){
                printf("No string stored!\n");
                break;
            }

            int len=strlen(str);
            int flag=1;

            for(int i=0, j=len-1; i<j; i++, j--) {
       
            char left = tolower(str[i]);
            char right = tolower(str[j]);

            if(left == ' ') {j++; continue;}
            if(right == ' ') {i--; continue;}

            if(left!=right){
            flag=0;
            break;
            }
            }

            if(flag){
            printf("String is a palindrome.\n");
            }
            else{
            printf("String is not a palindrome.\n");
            }
            break;
            }

            case 9:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=9);

    return 0;
}
