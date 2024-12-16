#include <iostream>
#include <string>
#include <iomanip> // For formatting output
using namespace std;

// Class definition for the Food Ordering System
class FoodOrderingSystem {
private:
    string customerName;
    struct MenuItem {
        string name;
        double price;
    };

    MenuItem menu[5] = {
        {"Pizza", 299},
        {"Burger", 99},
        {"Sandwich", 149},
        {"Rolls", 69},
        {"Biryani", 199}
    };

    double totalBill;

public:
    FoodOrderingSystem() : totalBill(0.0) {}

    void askCustomerName() {
        cout << "Enter your name: ";
        getline(cin, customerName);
    }

    void displayMenu() {
        cout << "\nWelcome, " << customerName << "! Here is the menu:\n";
        cout << "--------------------------------\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << menu[i].name << " " << fixed << setprecision(2) << menu[i].price << "\n";
        }
        cout << "--------------------------------\n";
    }

    void takeOrder() {
        int choice, quantity;
        char continueOrdering;

        do {
            cout << "\nEnter the number of the item you want to order: ";
            cin >> choice;

            if (choice < 1 || choice > 5) {
                cout << "Invalid choice. Please try again.\n";
                continue;
            }

            cout << "Enter the quantity: ";
            cin >> quantity;

            if (quantity <= 0) {
                cout << "Invalid quantity. Please try again.\n";
                continue;
            }

            totalBill += menu[choice - 1].price * quantity;
            cout << "\nItem added to your order: " << menu[choice - 1].name << " x " << quantity << "\n";

            cout << "Do you want to order more items? (y/n): ";
            cin >> continueOrdering;
        } while (tolower(continueOrdering) == 'y');
    }

    void generateBill() {
        cout << "\nThank you for your order, " << customerName << "!\n";
        cout << "Your total bill is: " << fixed << setprecision(2) << totalBill << "\n";
        cout << "Have a great day!\n";
    }
};

int main() {
    FoodOrderingSystem system;

    system.askCustomerName();
    system.displayMenu();
    system.takeOrder();
    system.generateBill();

    return 0;
}

