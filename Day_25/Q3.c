#include<stdio.h>
#include<string.h>

int main(){
    char names[70][50], temp[50];
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for(int i=0; i<=n; i++){
        fgets(names[i], sizeof(names[i]), stdin);
    }

    //Rowwise bubble sort using strcmp 
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(names[i], names[j]) > 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
              }
            }
          }

    printf("Names in alphabetical order:");
    for(int i=0; i<n; i++){
        printf("%s", names[i]);
    }

    return 0;
}
