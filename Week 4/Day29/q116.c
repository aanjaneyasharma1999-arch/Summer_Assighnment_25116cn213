#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};

int main() {

    struct Product p[100];
    int n = 0;
    int choice, id, i;
    int found;

    do {

        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Last Product\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("\nEnter Product ID: ");
            scanf("%d", &p[n].id);

            printf("Enter Product Name: ");
            scanf(" %[^\n]", p[n].name);

            printf("Enter Price: ");
            scanf("%f", &p[n].price);

            printf("Enter Quantity: ");
            scanf("%d", &p[n].quantity);

            n++;

            printf("\nProduct Added Successfully.\n");

            break;

        case 2:

            if(n == 0) {

                printf("\nNo Products Available.\n");

            } else {

                printf("\n----------- PRODUCT LIST -----------\n");

                for(i = 0; i < n; i++) {

                    printf("\nProduct %d\n", i + 1);
                    printf("ID       : %d\n", p[i].id);
                    printf("Name     : %s\n", p[i].name);
                    printf("Price    : %.2f\n", p[i].price);
                    printf("Quantity : %d\n", p[i].quantity);
                }
            }

            break;

        case 3:

            found = 0;

            printf("Enter Product ID to Search: ");
            scanf("%d", &id);

            for(i = 0; i < n; i++) {

                if(p[i].id == id) {

                    printf("\nProduct Found\n");
                    printf("ID       : %d\n", p[i].id);
                    printf("Name     : %s\n", p[i].name);
                    printf("Price    : %.2f\n", p[i].price);
                    printf("Quantity : %d\n", p[i].quantity);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Product Not Found.\n");

            break;

        case 4:

            found = 0;

            printf("Enter Product ID: ");
            scanf("%d", &id);

            for(i = 0; i < n; i++) {

                if(p[i].id == id) {

                    printf("Enter New Quantity: ");
                    scanf("%d", &p[i].quantity);

                    printf("Quantity Updated Successfully.\n");

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Product Not Found.\n");

            break;

        case 5:

            if(n > 0) {

                n--;

                printf("Last Product Deleted Successfully.\n");

            } else {

                printf("No Product Available.\n");
            }

            break;

        case 6:

            printf("\nThank You for Using Inventory Management System.\n");

            break;

        default:

            printf("\nInvalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}
