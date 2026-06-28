#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee emp[10]; 
     
    int choice, id, found;
    float newSalary, total;

    do {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Employee ID\n");
        printf("4. Update Salary\n");
        printf("5. Calculate Total Payroll\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch(choice){
            case 1:
            int n = 0; 
                if(n<10){
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
                    printf("Can't add more employees.\n");
                }

                break;

            case 2:
                printf("\n--- Employee Records ---\n");
                for (int i=0; i<n; i++) {
                    printf("ID: %d | Name: %s | Salary: %f\n", emp[i].id, emp[i].name, emp[i].salary);
                }

                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<n; i++){
                    if(emp[i].id == id){
                        printf("Record found: ID: %d | Name: %s | Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                        found = 1;

                        break;
                    }
                }
                if(!found){
                    printf("No record found");
                }

                break;

            case 4:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<n; i++){
                    if (emp[i].id == id) {
                        printf("Enter new salary for %s: ", emp[i].name);
                        scanf("%f", &newSalary);
                        emp[i].salary = newSalary;
                        printf("Salary updated successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    printf("No record found.");
                }
                break;

            case 5:
                total=0;
                for(int i=0; i<n; i++) {
                    total += emp[i].salary;
                }
                printf("Total Payroll (sum of all salaries): %f\n", total);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=6);

    return 0;
}

