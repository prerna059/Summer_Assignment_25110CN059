#include<stdio.h>
#include<string.h>

struct Account {
    int AccNo;
    char name[50];
    float balance;
};

int main() {
    struct Account accounts[10] = {
        {1001, "Luffy", 15000.0},
        {1002, "Zoro", 20000.0},
        {1003, "Sanji", 50000.0},
        {1004, "Nami", 100000.0},
        {1005, "Ussop", 60000.0},
        {1006, "Chopper", 50000.0},
        {1007, "Robin", 60000.0},
        {1008, "Jinbei", 40000.0},
        {1009, "Franky", 70000.0},
        {1010, "Brook", 70000.0}
    };

    int accNo, choice;
    float amount;
    int found = -1;
    
    printf("\n---WELCOME TO ATM---\n");
    printf("Enter your account number: ");
    scanf("%d", &accNo);

    for(int i=0; i<10; i++){
        if(accounts[i].AccNo == accNo){
            found=i;
            break;
        }
    }

    if(found == -1){
        printf("Account not found. Exiting...\n");
        return 0;
    }

    printf("Welcome %s! (Account No: %d)\n", accounts[found].name, accounts[found].AccNo);

    do{
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Your current balance is: %f\n", accounts[found].balance);
                 break;

            case 2:
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

            case 3:
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

            case 4:
                   printf("Thank you for using the ATM.\n");
                break;

            default: printf("Invalid input, try again.\n");
        }
    } while(choice!=4);

    return 0;
}
