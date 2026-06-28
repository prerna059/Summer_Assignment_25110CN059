#include<stdio.h>
#include<string.h>

struct Account {
    int AccNo;
    char name[50];
    float balance;
};

int main(){
    struct Account accounts[70];

    int accNo, choice, found;
    float amount;
    
    do{
        printf("\n--- Bank Account System ---\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Check Balance\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 1: 
            int n=0;
            if(n<70) {
                    printf("Enter Account Number: ");
                    scanf("%d", &accounts[n].AccNo);
                    getchar();

                    printf("Enter Account Holder Name: ");
                    fgets(accounts[n].name, sizeof(accounts[n].name), stdin);
                    accounts[n].name[strcspn(accounts[n].name, "\n")] = '\0';

                    printf("Enter Initial Balance: ");
                    scanf("%f", &accounts[n].balance);

                    n++;
                    printf("Account created successfully!\n");
                } 
                else{
                    printf("CAn't create more accounts.\n");
                }
                break;
            case 2:
                printf("\n--- Account Records ---\n");
                for(int i=0; i<n; i++){
                    printf("Account No: %d | Name: %s | Balance: %.2f\n", accounts[i].AccNo, accounts[i].name, accounts[i].balance);
                }
                break;
            case 3:
                printf("Your current balance is: %f\n", accounts[found].balance);
                 break;

            case 4:
                printf("Enter amount to deposit: ");
                 scanf("%f", &amount);
                if(amount>0){
                    accounts[found].balance= accounts[found].balance+amount;
                    printf("Deposited successfully! New balance: %f\n", accounts[found].balance);
                } 
                else{
                    printf("Invalid deposit amount.\n");
                }
                 break;

            case 5:
                printf("Enter amount to withdraw: ");
                 scanf("%f", &amount);
                if(amount>0 && amount<=accounts[found].balance){
                    accounts[found].balance = accounts[found].balance-amount;
                     printf("Withdrawal successful! New balance: %f\n", accounts[found].balance);
                } 
                else if(amount>accounts[found].balance){
                printf("Insufficient balance.\n");
                } 
                else{
                printf("Invalid withdrawal amount.\n");
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

               
