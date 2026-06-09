#include <stdio.h>

int main() {
    int n, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}
