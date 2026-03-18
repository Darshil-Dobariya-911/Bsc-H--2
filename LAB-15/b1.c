#include <stdio.h>
#include <string.h>

struct Item {
    int item_code;
    char item_name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[100];
    int n = 0, choice, i, code;
    float total_cost;

    while(1) {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n2. Update Item\n3. View Items\n4. Total Cost\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1: // Add Item
                printf("Enter item code: ");
                scanf("%d", &items[n].item_code);

                printf("Enter item name: ");
                scanf("%s", items[n].item_name);

                printf("Enter quantity: ");
                scanf("%d", &items[n].quantity);

                printf("Enter price: ");
                scanf("%f", &items[n].price);

                n++;
                break;

            case 2: // Update Item
                printf("Enter item code to update: ");
                scanf("%d", &code);

                for(i = 0; i < n; i++) {
                    if(items[i].item_code == code) {
                        printf("Enter new quantity: ");
                        scanf("%d", &items[i].quantity);

                        printf("Enter new price: ");
                        scanf("%f", &items[i].price);
                        break;
                    }
                }
                if(i == n)
                    printf("Item not found!\n");
                break;

            case 3: // View Items
                printf("\nItem List:\n");
                for(i = 0; i < n; i++) {
                    printf("Code: %d, Name: %s, Qty: %d, Price: %.2f\n",
                        items[i].item_code,
                        items[i].item_name,
                        items[i].quantity,
                        items[i].price);
                }
                break;

            case 4: // Total Cost
                total_cost = 0;
                for(i = 0; i < n; i++) {
                    total_cost += items[i].quantity * items[i].price;
                }
                printf("Total Inventory Cost = %.2f\n", total_cost);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}