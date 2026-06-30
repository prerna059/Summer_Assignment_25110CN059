#include<stdio.h>
#include<string.h>

#define EMP 100
#define NAME 50
#define DEP 50

int main(){
    int ID[EMP];
    char names[EMP][NAME];
    char departments[EMP][DEP];
    float salaries[EMP];
    int count=0;
    int choice,id, found;
    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Salary by ID\n");
        printf("5. Delete Employee by ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                if(count<EMP){
                    printf("Enter Employee ID: ");
                    scanf("%d", &ID[count]);
                    getchar();

                    printf("Enter Name: ");
                    fgets(names[count], NAME, stdin);
                    names[count][strcspn(names[count], "\n")] = '\0';

                    printf("Enter Department: ");
                    fgets(departments[count], DEP, stdin);
                    departments[count][strcspn(departments[count], "\n")] = '\0';

                    printf("Enter Salary: ");
                    scanf("%f", &salaries[count]);
                    count++;
                    printf("Employee added successfully!\n");
                } 
                else{
                printf("Employee list is full!\n");
                }
                break;

            case 2:
                if(count==0){
                printf("No employee records found.\n");
                } 
                else{
                    printf("\n--- Employee Records ---\n");
                    for(int i = 0; i<count; i++) {
                        printf("ID        : %d\n", ID[i]);
                        printf("Name      : %s\n", names[i]);
                        printf("Department: %s\n", departments[i]);
                        printf("Salary    : %f\n\n", salaries[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<count; i++){
                    if(ID[i]==id){
                    printf("Record Found:\n");
                    printf("ID        : %d\n", ID[i]);
                    printf("Name      : %s\n", names[i]);
                    printf("Department: %s\n", departments[i]);
                    printf("Salary    : %f\n", salaries[i]);
                        found=1;
                        break;
                    }
                }
                if(!found){
                printf("No employee found.");
                }
                break;

            case 4:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &id);
                found=0;
                for(int i = 0; i<count; i++) {
                    if(ID[i]== id){
                        printf("Enter new salary: ");
                        scanf("%f", &salaries[i]);
                        printf("Salary updated successfully!\n");
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("No employee found.");
                }
                break;

            case 5:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);
                found=0;
                for(int i = 0; i<count; i++){
                    if(ID[i] == id) {
                        for(int j=i; j <count-1; j++) {
                            ID[j] = ID[j+1];
                            strcpy(names[j], names[j+1]);
                            strcpy(departments[j], departments[j+1]);
                            salaries[j] = salaries[j+1];
                        }
                        count--;
                        printf("Employee deleted successfully!\n");
                        found=1;
                        break;
                    }
                }
                if(!found){
                printf("No employee found with ID %d\n", id);
                }
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default: printf("Invalid input, try again.\n");
                }
    } while(choice!=6);

   
return 0;
}
             
