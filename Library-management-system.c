#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int quantity;
    int taken;
    int returned;
};

int main() {
    struct Book library[100];
    int n, i;
    int totalBooks = 0;
    int totalTaken = 0;
    int totalReturned = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input details
    for(i = 0; i < n; i++) {
        library[i].id = i + 1;

        printf("\nEnter details for Book %d\n", i + 1);

        printf("Enter book name: ");
        scanf(" %[^\n]", library[i].name);

        printf("Enter author name: ");
        scanf(" %[^\n]", library[i].author);

        printf("Enter quantity: ");
        scanf("%d", &library[i].quantity);

        printf("Enter number of books taken: ");
        scanf("%d", &library[i].taken);

        printf("Enter number of books returned: ");
        scanf("%d", &library[i].returned);

        totalBooks += library[i].quantity;
        totalTaken += library[i].taken;
        totalReturned += library[i].returned;
    }

    // Output section (SAME FORMAT)
    printf("\n\n===== LIBRARY DETAILS =====\n");

    printf("Total number of books: %d\n", totalBooks);
    printf("Total books taken    : %d\n", totalTaken);
    printf("Total books returned : %d\n\n", totalReturned);

    for(i = 0; i < n; i++) {
        printf("Book %d Details:\n", library[i].id);
        printf("Name      : %s\n", library[i].name);
        printf("Author    : %s\n", library[i].author);
        printf("Quantity  : %d\n", library[i].quantity);
        printf("Taken     : %d\n", library[i].taken);
        printf("Returned  : %d\n", library[i].returned);
        printf("-----------------------------\n");
    }

    return 0;
}
