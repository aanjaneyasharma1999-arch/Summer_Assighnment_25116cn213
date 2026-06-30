#include <stdio.h>

struct Ticket {
    int seatNo;
    char name[50];
    int booked;
};

int main() {

    struct Ticket seat[10];
    int choice, seatNo;
    int i;

    for(i = 0; i < 10; i++) {
        seat[i].seatNo = i + 1;
        seat[i].booked = 0;
    }

    do {

        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. View Booking Status\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("\nAvailable Seats:\n");

            for(i = 0; i < 10; i++) {
                if(seat[i].booked == 0)
                    printf("Seat %d\n", seat[i].seatNo);
            }

            break;

        case 2:

            printf("Enter Seat Number (1-10): ");
            scanf("%d", &seatNo);

            if(seatNo < 1 || seatNo > 10) {

                printf("Invalid Seat Number.\n");

            } else if(seat[seatNo - 1].booked == 1) {

                printf("Seat Already Booked.\n");

            } else {

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", seat[seatNo - 1].name);

                seat[seatNo - 1].booked = 1;

                printf("Ticket Booked Successfully.\n");
            }

            break;

        case 3:

            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seatNo);

            if(seatNo < 1 || seatNo > 10) {

                printf("Invalid Seat Number.\n");

            } else if(seat[seatNo - 1].booked == 0) {

                printf("Seat is Not Booked.\n");

            } else {

                seat[seatNo - 1].booked = 0;

                printf("Ticket Cancelled Successfully.\n");
            }

            break;

        case 4:

            printf("\nBooking Status\n");

            for(i = 0; i < 10; i++) {

                if(seat[i].booked)

                    printf("Seat %d : Booked by %s\n",
                           seat[i].seatNo,
                           seat[i].name);

                else

                    printf("Seat %d : Available\n",
                           seat[i].seatNo);
            }

            break;

        case 5:

            printf("\nThank You for Using Ticket Booking System.\n");

            break;

        default:

            printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}
