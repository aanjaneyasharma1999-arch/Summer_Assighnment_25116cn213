#include <stdio.h>

int main() {

    int arr[100], n, i;
    int choice;
    int key;
    int sum;
    int max, min;
    int temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {

        printf("\n========== ARRAY OPERATIONS ==========\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Search Element\n");
        printf("6. Sort Array (Ascending)\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("\nArray Elements:\n");

            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");

            break;

        case 2:

            sum = 0;

            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d\n", sum);

            break;

        case 3:

            max = arr[0];

            for(i = 1; i < n; i++)
                if(arr[i] > max)
                    max = arr[i];

            printf("Maximum = %d\n", max);

            break;

        case 4:

            min = arr[0];

            for(i = 1; i < n; i++)
                if(arr[i] < min)
                    min = arr[i];

            printf("Minimum = %d\n", min);

            break;

        case 5:

            printf("Enter Element to Search: ");
            scanf("%d", &key);

            for(i = 0; i < n; i++) {

                if(arr[i] == key) {

                    printf("Element Found at Position %d\n", i + 1);
                    break;
                }
            }

            if(i == n)
                printf("Element Not Found\n");

            break;

        case 6:

            for(i = 0; i < n - 1; i++) {

                for(int j = i + 1; j < n; j++) {

                    if(arr[i] > arr[j]) {

                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            printf("Array Sorted Successfully.\n");

            break;

        case 7:

            printf("Thank You!\n");

            break;

        default:

            printf("Invalid Choice.\n");
        }

    } while(choice != 7);

    return 0;
}
