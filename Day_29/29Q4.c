#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main(){
    struct Item inventory[SIZE];
    int count=0, choice, id, found;
    char name[50];

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Quantity\n");
        printf("5. Delete Item\n");
        printf("6. Calculate Total Value\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                if(count >= SIZE){
                    printf("Inventory full!\n");
                } 
                else{
                    printf("Enter Item ID: ");
                    scanf("%d", &inventory[count].id);
                    getchar();//removes \n
                    printf("Enter Item Name: ");
                    fgets(inventory[count].name, sizeof(inventory[count].name), stdin);
                    inventory[count].name[strcspn(inventory[count].name, "\n")] = '\0';
                    printf("Enter Quantity: ");
                    scanf("%d", &inventory[count].quantity);
                    printf("Enter Price: ");
                    scanf("%f", &inventory[count].price);
                    count++;
                    printf("Item added successfully.\n");
                }
                break;

            case 2:
                if(count == 0){
                    printf("Inventory is empty!\n");
                } 
                else{
                    printf("\nID\tName\t\t\t\t\tQuantity\tPrice\n");
                    for(int i=0; i<count; i++) {
                        printf("%d\t%s\t%d\t\t%f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                    }
                }
                break;

            case 3: 
                printf("Enter Item ID to search: ");
                scanf("%d", &id);
                found=0;
                for(int i = 0; i<count; i++) {
                    if(inventory[i].id == id) {
                        printf("Item Found: %d %s %d %f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                        found=1;
                        break;
                    }
                }
                if(!found) {
                    printf("Item not found.\n");
                }
                break;

            case 4: 
                printf("Enter Item ID to update: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<count; i++){
                    if(inventory[i].id == id){
                        printf("Enter new quantity: ");
                        scanf("%d", &inventory[i].quantity);
                        printf("Quantity updated successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(!found) {
                    printf("Item not found.\n");
                }
                break;

            case 5: 
                printf("Enter Item ID to delete: ");
                scanf("%d", &id);
                found=0;
                for(int i=0; i<count; i++) {
                    if(inventory[i].id == id) {
                        printf("Deleted Item: %s\n", inventory[i].name);
                        for(int j=i; j<count-1; j++){
                            inventory[j] = inventory[j + 1];
                        }
                        count--;
                        found=1;
                        break;
                    }
                }
                if(!found) {
                    printf("Item not found.\n");
                }
                break;

            case 6: 
                if(count == 0){
                    printf("Inventory is empty!\n");
                } 
                else{
                    float total=0;
                    for(int i=0; i<count; i++) {
                        total += inventory[i].quantity * inventory[i].price;
                    }
                    printf("Total Inventory Value = %f\n", total);
                }
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid input, try again.\n");
        }
    } while(choice!=7);

    return 0;
}
