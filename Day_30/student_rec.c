#include<stdio.h>
#include<string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50
#define COURSE_LEN 50

int main() {
    int rollNos[MAX_STUDENTS];
    char names[MAX_STUDENTS][NAME_LEN];
    int ages[MAX_STUDENTS];
    char courses[MAX_STUDENTS][COURSE_LEN];
    int count=0;
    int choice, i, roll, found;
do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Delete Student by Roll No\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < MAX_STUDENTS) {
                    printf("Enter Roll No: ");
                    scanf("%d", &rollNos[count]);
                    getchar(); 

                    printf("Enter Name: ");
                    fgets(names[count], NAME_LEN, stdin);
                    names[count][strcspn(names[count], "\n")] = '\0';

                    printf("Enter Age: ");
                    scanf("%d", &ages[count]);
                    getchar();

                    printf("Enter Course: ");
                    fgets(courses[count], COURSE_LEN, stdin);
                    courses[count][strcspn(courses[count], "\n")] = '\0';

                    count++;
                    printf("Student added successfully!\n");
                } 
                else{
                    printf("Student list is full!\n");
                }
                break;

            case 2:
                if(count == 0) {
                    printf("No records found.\n");
                } 
                else{
                    printf("\n--- Student Records ---\n");
                    for(i = 0; i<count; i++) {
                        printf("Roll No: %d\n", rollNos[i]);
                        printf("Name   : %s\n", names[i]);
                        printf("Age    : %d\n", ages[i]);
                        printf("Course : %s\n\n", courses[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Roll No to search: ");
                scanf("%d", &roll);
                found=0;
                for(i = 0; i<count; i++){
                    if(rollNos[i] == roll) {
                        printf("Record Found:\n");
                        printf("Roll No: %d\n", rollNos[i]);
                        printf("Name   : %s\n", names[i]);
                        printf("Age    : %d\n", ages[i]);
                        printf("Course : %s\n", courses[i]);
                        found=1;
                        break;
                    }
                }
                if(!found){
                printf("No student found with Roll No %d\n", roll);
                }
                break;

            case 4:
                printf("Enter Roll No to delete: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i<count; i++){
                    if(rollNos[i] == roll){
                        for(int j=i; j<count-1; j++){
                            rollNos[j] = rollNos[j+1];
                            strcpy(names[j], names[j+1]);
                            ages[j] = ages[j+1];
                            strcpy(courses[j], courses[j+1]);
                        }
                        count--;
                        printf("Record deleted successfully!\n");
                        found=1;
                        break;
                    }
                }
                if(!found){
                printf("No student found with Roll No %d\n", roll);
                }
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=5);

    return 0;
}
