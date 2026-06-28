#include<stdio.h>
#include<string.h>

struct Student{
    int rollNo;
    char name[50];
    int year;
    float marks;
};

int main() {
    struct Student students[100];
    
    int choice, roll;

    do{
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add student record\n");
        printf("2. Display all records\n");
        printf("3. Search by roll number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice){
            case 1:
                int n = 0;//number of students
                if(n<100){
                    printf("Enter roll number: ");
                    scanf("%d", &students[n].rollNo);
                    getchar();

                    printf("Enter name: ");
                    fgets(students[n].name, sizeof(students[n].name), stdin);
                    students[n].name[strcspn(students[n].name, "\n")] = '\0';

                    printf("Enter year: ");
                    scanf("%d", &students[n].year);
                    getchar();

                    printf("Enter marks: ");
                    scanf("%f", &students[n].marks);

                    n++;
                    printf("Records added successfully!\n");
                } 
                else{
                printf("Cannot add more students.\n");
                }

                break;

            case 2:
             printf("\n--- Student Records ---\n");
                for(int i=0; i<n; i++){
                printf("Roll No: %d | Name: %s | Year: %d | Marks: %f\n", students[i].rollNo, students[i].name, students[i].year, students[i].marks);
                }

                  break;

            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &roll);
                int found = 0;
                for(int i= 0; i<n; i++){
                    if(students[i].rollNo == roll){
                        printf("Record found: Roll No: %d | Name: %s | Year: %d | Marks: %f\n", students[i].rollNo, students[i].name, students[i].year, students[i].marks);
                        found=1;
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
                printf("Invalid input. Enter again.\n");
        }
    } while(choice!=4);

return 0;
}
