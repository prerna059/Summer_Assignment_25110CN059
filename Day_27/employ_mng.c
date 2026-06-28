#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100]; 
   
    int choice, id, found;
  

    do{
        printf("\n--- Employee Management System ---\n");
        printf("1. Add employee Record\n");
        printf("2. Display all records\n");
        printf("3. Search by employee ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch(choice){
            case 1:
               int n = 0;// number of employees
                if (n < 50) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[n].id);
                    getchar();

                    printf("Enter Employee Name: ");
                    fgets(emp[n].name, sizeof(emp[n].name), stdin);
                    emp[n].name[strcspn(emp[n].name, "\n")] = '\0';

                    printf("Enter Salary: ");
                    scanf("%f", &emp[n].salary);

                    n++;
                    printf("Employee record added successfully!\n");
                } 
                else{
                    printf("Can't add more.\n");
                }
                 
                break;

            case 2:
                 printf("\n--- Employee Records ---\n");
                for(int i=0; i<n; i++) {
                    printf("ID: %d | Name: %s | Salary: %f\n", emp[i].id, emp[i].name, emp[i].salary);
                }
                 
                 break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (int i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("Record found: ID: %d | Name: %s | Salary: %f\n", emp[i].id, emp[i].name, emp[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    printf("No record found.");
                }
                 break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=4);


    return 0;
}
