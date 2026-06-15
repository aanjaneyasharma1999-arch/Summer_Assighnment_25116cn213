#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Merged Array:\n");

    for(int i = 0; i < n1; i++)
        printf("%d ", a[i]);

    for(int i = 0; i < n2; i++)
        printf("%d ", b[i]);

    return 0;
}
