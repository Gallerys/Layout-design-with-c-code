#include <stdio.h>

void displayMenu() {
    printf("========== Menu ==========\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Exit\n");
    printf("==========================\n");
}

int main() {
    int choice;

    do {
        displayMenu();

        // Get user input
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process user choice
        switch (choice) {
            case 1:
                printf("You selected Option 1\n");
                // Add your code for Option 1
                break;
            case 2:
                printf("You selected Option 2\n");
                // Add your code for Option 2
                break;
            case 3:
                printf("You selected Option 3\n");
                // Add your code for Option 3
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);
    return 0;
}
