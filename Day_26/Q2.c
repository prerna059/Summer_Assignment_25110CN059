#include<stdio.h>
#include<string.h>

struct Voter{
    char name[50];
    int age;
    char citizenship[50];
};

int main(){
    int n;

    printf("Enter number of people: ");
    scanf("%d", &n);
    getchar(); //consume newline left

    struct Voter voter[n];  //arr of struct

    for(int i=0; i<n; i++){
        printf("Enter name of person %d: ", i+1);
        fgets(voter[i].name, sizeof(voter[i].name), stdin);
        voter[i].name[strcspn(voter[i].name, "\n")] = '\0'; // remove newline

        printf("Enter age of %s: ", voter[i].name);
        scanf("%d", &voter[i].age);
        getchar();

        printf("Enter citizenship of person: ");
        fgets(voter[i].citizenship, sizeof(voter[i].citizenship), stdin);
        voter[i].citizenship[strcspn(voter[i].citizenship, "\n")] = '\0';
    }

    printf("\n|<--- Voting Eligibility Results --->|\n");
    for(int i=0; i<n; i++){
        if(voter[i].age >= 18 && voter[i].citizenship == "Indian"){
            printf("%s (Age %d): Eligible to vote.\n", voter[i].name, voter[i].age);
        } 
        else{
            printf("%s (Age %d): Not eligible.\n", voter[i].name, voter[i].age);
        
        }
    }

    return 0;
}

