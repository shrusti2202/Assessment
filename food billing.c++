#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float price;
} FoodItem;

int main() {
    // Initialize the food menu
    FoodItem menu[] = {
        {1, "Pizza", 180},
        {2, "Burger", 100},
        {3, "dosa", 120},
        {4, "idli", 50},
    };
    int menuSize = sizeof(menu) / sizeof(menu[0]);

    int choice;
    int quantity;
    char more;
    float totalBill = 0.0;

    printf("\n=== Welcome to the Food Billing System ===\n\n");

    do {
        printf("Available Food Items:\n");
        for (int i = 0; i < menuSize; i++) {
            printf("%d. %s - Rs/pcs-%.2f\n", menu[i].id, menu[i].name, menu[i].price);
        }

        printf("\nEnter the ID of the food item you want to order: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > menuSize) {
            printf("Invalid choice. Please select a valid food item.\n");
            continue;
        }

        printf("Enter the quantity for %s: ", menu[choice - 1].name);
        scanf("%d", &quantity);

        if (quantity <= 0) {
            printf("Invalid quantity. Please enter a positive number.\n");
            continue;
        }

        // Calculate the bill for this item and add it to the total bill
        totalBill += menu[choice - 1].price * quantity;
        printf("Added %d x %s to your order. Subtotal: Rs/pcs-%.2f\n", quantity, menu[choice - 1].name, totalBill);

        // Ask if the user wants to order more
        printf("\nDo you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    printf("\n=== Final Bill ===\n");
    printf("Total Amount: Rs/pcs-%.2f\n", totalBill);
    printf("Thank you for ordering! Have a great day!\n");

    return 0;
}

