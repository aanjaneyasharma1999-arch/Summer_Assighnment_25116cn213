#include <stdio.h>

int main() {
    int n, original, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if(original == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
