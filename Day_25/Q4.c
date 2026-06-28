#include<stdio.h>
#include<string.h>

int main() 
{
    char words[50][50], temp[50];
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for(int i=0; i<=n; i++){
        fgets(words[i], sizeof(words[i]), stdin);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(strlen(words[i])>strlen(words[j])){
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:");
    for(int i=0; i<=n; i++) {
        printf("%s", words[i]);
    }

return 0;
}
