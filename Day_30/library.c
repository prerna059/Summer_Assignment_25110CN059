#include<stdio.h>
#include<string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int available;//1=available, 0=issued
};

int main(){
    struct Book library[50];  
    
    int choice, id, found;

    do{
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book Record\n");
        printf("2. Display All Books\n");
        printf("3. Search by Book ID\n");
        printf("4. Update Availability (Issue/Return)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch(choice){
            case 1:
            int n=0;// number of books
                if(n<50){
                    printf("Enter Book ID: ");
                    scanf("%d", &library[n].id);
                    getchar();

                    printf("Enter Book Title: ");
                    fgets(library[n].title, sizeof(library[n].title), stdin);
                    library[n].title[strcspn(library[n].title, "\n")] = '\0';

                    printf("Enter Author Name: ");
                    fgets(library[n].author, sizeof(library[n].author), stdin);
                    library[n].author[strcspn(library[n].author, "\n")] = '\0';

                    library[n].available = 1; // default: available
                    n++;
                    printf("Book record added successfully!\n");
                }
                 else{
                    printf("Library full! Cannot add more books.\n");
                }

                break;

            case 2:
                printf("\n--- Book Records ---\n");
                for (int i=0; i<n; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n", library[i].id, library[i].title, library[i].author,
                           library[i].available ? "Available" : "Issued");
                }

                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<n; i++){
                    if (library[i].id == id) {
                        printf("Record found: ID: %d | Title: %s | Author: %s | Status: %s\n", library[i].id, library[i].title, library[i].author,
                               library[i].available ? "Available" : "Issued");
                        found=1;

                        break;
                    }
                }
                if(!found){
                    printf("No record found with ID %d.\n", id);
                }

                 break;

            case 4:
                printf("Enter Book ID to update availability: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<n; i++) {
                    if (library[i].id == id) {
                        if(library[i].available){
                            library[i].available = 0;
                            printf("Book '%s' issued successfully!\n", library[i].title);
                        } 
                        else{
                            library[i].available = 1;
                            printf("Book '%s' returned successfully!\n", library[i].title);
                        }
                        found=1;
                        
                        break;
                    }
                }
                if(!found){
                    
                    printf("No record found with ID %d.\n", id);
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
