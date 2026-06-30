#include <stdio.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

int main() {

    struct Contact contact[100];
    int n = 0;
    int choice, i;
    char search[50];
    int found;

    do {

        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Last Contact\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("\nEnter Name: ");
            scanf(" %[^\n]", contact[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", contact[n].phone);

            printf("Enter Email: ");
            scanf("%s", contact[n].email);

            n++;

            printf("\nContact Added Successfully.\n");

            break;

        case 2:

            if(n == 0) {

                printf("\nNo Contacts Available.\n");

            } else {

                printf("\n------- CONTACT LIST -------\n");

                for(i = 0; i < n; i++) {

                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", contact[i].name);
                    printf("Phone : %s\n", contact[i].phone);
                    printf("Email : %s\n", contact[i].email);
                }
            }

            break;

        case 3:

            found = 0;

            printf("Enter Name to Search: ");
            scanf(" %[^\n]", search);

            for(i = 0; i < n; i++) {

                if(strcmp(contact[i].name, search) == 0) {

                    printf("\nContact Found\n");
                    printf("Name  : %s\n", contact[i].name);
                    printf("Phone : %s\n", contact[i].phone);
                    printf("Email : %s\n", contact[i].email);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Contact Not Found.\n");

            break;

        case 4:

            if(n > 0) {

                n--;

                printf("Last Contact Deleted Successfully.\n");

            } else {

                printf("No Contacts to Delete.\n");
            }

            break;

        case 5:

            printf("\nThank You for Using Contact Management System.\n");

            break;

        default:

            printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}
