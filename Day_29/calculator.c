#include <stdio.h>

int main(){
    int choice;
    float a, b, result;

    do {
        printf("\n--- Menu Driven Calculator ---\n");
        printf("1. Sum\n");
        printf("2. Difference\n");
        printf("3. Product\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice>=1 && choice<=5){
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice){
            case 1:
                result=a+b;
                printf("Result = %f\n", result);
                break;
            case 2:
                result=a-b;
                printf("Result = %f\n", result);
                break;
            case 3:
                result=a*b;
                printf("Result = %f\n", result);
                break;
            case 4:
                if(b!=0)
                    result=a/b;
                else{
                    printf("Error\n");
                    continue;
                }
                printf("Result = %f\n", result);
                break;
            case 5: 
                result = (int)a % (int)b;
                printf("Result = %f\n", result);
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
