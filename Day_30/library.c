#include<stdio.h>
#include<string.h>

#define BOOKS 100
#define TITLE 50
#define AUTHOR 50

int main() {
    int bookIDs[BOOKS];
    char titles[BOOKS][TITLE];
    char authors[BOOKS][AUTHOR];
    int available[BOOKS]; 
    int count=0;
    int choice, id, found;

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete Book by ID\n");
        printf("5. Issue Book\n");
        printf("6. Return Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count<BOOKS){
                    printf("Enter Book ID: ");
                    scanf("%d", &bookIDs[count]);
                    getchar();

                    printf("Enter Title: ");
                    fgets(titles[count], TITLE, stdin);
                    titles[count][strcspn(titles[count], "\n")] = '\0';

                    printf("Enter Author: ");
                    fgets(authors[count], AUTHOR, stdin);
                    authors[count][strcspn(authors[count], "\n")] = '\0';

                    available[count]=1;
                    count++;
                    printf("Book added successfully!\n");
                } 
                else{
                printf("Library is full!\n");
                }
                break;

            case 2:
                if(count==0){
                printf("No books in library.\n");
                } 
                else{
                    printf("\n--- Book Records ---\n");
                    for(int i = 0; i<count; i++) {
                        printf("ID     : %d\n", bookIDs[i]);
                        printf("Title  : %s\n", titles[i]);
                        printf("Author : %s\n", authors[i]);
                        printf("Status : %s\n\n", available[i]?"Available":"Issued");
                          }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<count; i++) {
                    if(bookIDs[i]==id){
                        printf("Book Found:\n");
                        printf("ID     : %d\n", bookIDs[i]);
                        printf("Title  : %s\n", titles[i]);
                        printf("Author : %s\n", authors[i]);
                        printf("Status : %s\n", available[i]?"Available":"Issued");
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("No book found with ID %d\n", id);
                }
                break;


            case 4:
                printf("Enter Book ID to delete: ");
                scanf("%d", &id);
                found=0;
                for(int i = 0; i<count; i++) {
                    if(bookIDs[i]==id) {
                        for(int j=i; j<count-1; j++) {
                            bookIDs[j] = bookIDs[j+1];
                            strcpy(titles[j], titles[j+1]);
                            strcpy(authors[j], authors[j+1]);
                            available[j] = available[j+1];
                        }
                        count--;
                        printf("Book deleted successfully!\n");
                        found=1;
                        break;
                    }
 }
                if(!found){
                    printf("No book found with ID %d\n", id);
                }
                break;

            case 5:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<count; i++) {
                    if(bookIDs[i] == id){
                        if(available[i]){
                     available[i]=0;
                    printf("Book issued successfully!\n");
                        } 
                        else{
                        printf("Book already issued!\n");
                        }
                        found=1;
                        break;
                    }
                }
                if(!found){
                printf("No book found.");
                }
                break;

            case 6:
                printf("Enter Book ID to return: ");
                 printf("Enter Book ID to return: ");
                scanf("%d", &id);
                found=0;
                for(int i = 0; i<count; i++){
                    if(bookIDs[i] == id) {
                        if(!available[i]) {
                            available[i]=1;
                            printf("Book returned successfully!\n");
                        }
                         else{
                            printf("Book was not issued.\n");
                        }
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("No book found with ID %d\n", id);
                }
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=7);
     return 0;
}
