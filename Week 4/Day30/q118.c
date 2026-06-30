#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;
};

int main() {

    struct Book books[100];
    int n = 0;
    int choice, id, i, found;

    do {

        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("\nEnter Book ID: ");
            scanf("%d", &books[n].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", books[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", books[n].author);

            books[n].available = 1;
            n++;

            printf("\nBook Added Successfully!\n");
            break;

        case 2:

            if(n == 0) {

                printf("\nNo Books Available.\n");

            } else {

                printf("\n========== BOOK LIST ==========\n");

                for(i = 0; i < n; i++) {

                    printf("\nBook %d\n", i + 1);
                    printf("ID     : %d\n", books[i].id);
                    printf("Title  : %s\n", books[i].title);
                    printf("Author : %s\n", books[i].author);

                    if(books[i].available)
                        printf("Status : Available\n");
                    else
                        printf("Status : Issued\n");
                }
            }

            break;

        case 3:

            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {

                if(books[i].id == id) {

                    printf("\nBook Found\n");
                    printf("Title  : %s\n", books[i].title);
                    printf("Author : %s\n", books[i].author);

                    if(books[i].available)
                        printf("Status : Available\n");
                    else
                        printf("Status : Issued\n");

                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Book Not Found.\n");

            break;

        case 4:

            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {

                if(books[i].id == id) {

                    if(books[i].available) {

                        books[i].available = 0;
                        printf("Book Issued Successfully.\n");

                    } else {

                        printf("Book Already Issued.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Book Not Found.\n");

            break;

        case 5:

            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {

                if(books[i].id == id) {

                    books[i].available = 1;
                    printf("Book Returned Successfully.\n");

                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Book Not Found.\n");

            break;

        case 6:

            printf("\nThank You for Using Mini Library System.\n");
            break;

        default:

            printf("\nInvalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}
