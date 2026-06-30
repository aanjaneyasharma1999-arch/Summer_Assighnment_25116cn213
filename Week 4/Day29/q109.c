#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int quantity;
};

int main() {

    struct Book book[100];
    int n = 0;
    int choice, i, id;
    int found;

    do {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("\nEnter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", book[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[n].author);

            printf("Enter Quantity: ");
            scanf("%d", &book[n].quantity);

            n++;

            printf("\nBook Added Successfully!\n");
            break;

        case 2:

            if(n == 0) {
                printf("\nNo Books Available.\n");
            } else {

                printf("\n------ BOOK LIST ------\n");

                for(i = 0; i < n; i++) {

                    printf("\nBook %d\n", i + 1);
                    printf("ID       : %d\n", book[i].id);
                    printf("Name     : %s\n", book[i].name);
                    printf("Author   : %s\n", book[i].author);
                    printf("Quantity : %d\n", book[i].quantity);
                }
            }

            break;

        case 3:

            found = 0;

            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            for(i = 0; i < n; i++) {

                if(book[i].id == id) {

                    printf("\nBook Found\n");
                    printf("Name     : %s\n", book[i].name);
                    printf("Author   : %s\n", book[i].author);
                    printf("Quantity : %d\n", book[i].quantity);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Book Not Found.\n");

            break;

        case 4:

            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {

                if(book[i].id == id) {

                    if(book[i].quantity > 0) {

                        book[i].quantity--;
                        printf("Book Issued Successfully.\n");

                    } else {

                        printf("Book Not Available.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Book Not Found.\n");

            break;

        case 5:

            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {

                if(book[i].id == id) {

                    book[i].quantity++;

                    printf("Book Returned Successfully.\n");

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Book Not Found.\n");

            break;

        case 6:

            printf("\nThank You for using Library Management System.\n");
            break;

        default:

            printf("\nInvalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}
