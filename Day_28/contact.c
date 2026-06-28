#include<stdio.h>
#include<string.h>

struct Contact {
    char name[50];
    char phone[10];
    char email[50];
};

int main(){
    struct Contact contacts[50];
   
    int choice, found;
    char search[50], new[10];

    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search by Name\n");
        printf("4. Update Phone Number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice){
            case 1:
             int n = 0;//number of contacts
                if(n<50){
                    printf("Enter name: ");
                    fgets(contacts[n].name, sizeof(contacts[n].name), stdin);
                    contacts[n].name[strcspn(contacts[n].name, "\n")] = '\0';

                    printf("Enter phone number: ");
                    fgets(contacts[n].phone, sizeof(contacts[n].phone), stdin);
                    contacts[n].phone[strcspn(contacts[n].phone, "\n")] = '\0';

                    printf("Enter email: ");
                    fgets(contacts[n].email, sizeof(contacts[n].email), stdin);
                    contacts[n].email[strcspn(contacts[n].email, "\n")] = '\0';

                    n++;
                    printf("Contact added successfully!\n");
                } 
                else{
                    printf("Can't add more contacts.\n");
                }
                break;

            case 2:
                printf("\n--- Contact List ---\n");
                for(int i=0; i<n; i++){
                    printf("Name: %s | Phone: %s | Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                }

                break;

            case 3:
                printf("Enter name to search: ");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';

                found=0;
                for(int i= 0; i<n; i++) {
                    if(strcmp(contacts[i].name, search) == 0){
                        printf("Record found: Name: %s | Phone: %s | Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                        found= 1;
                        break;
                    }
                }
                if(!found){
                    printf("No contact found.");
                }

                break;

            case 4:
                printf("Enter name to update phone number: ");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';

                found=0;
                for(int i=0; i<n; i++){
                    if (strcmp(contacts[i].name, search) == 0) {

                        printf("Enter new phone number for %s: ", contacts[i].name);
                        fgets(new, sizeof(new), stdin);
                        new[strcspn(new, "\n")] = '\0';

                        strcpy(contacts[i].phone, new);
                        printf("Phone number updated successfully!\n");
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("No contact found.");
                }

                 break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=5);

    return 0;
}
