#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], copy[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
        copy[i] = arr[i];

    printf("Copied Array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", copy[i]);

    return 0;
}
