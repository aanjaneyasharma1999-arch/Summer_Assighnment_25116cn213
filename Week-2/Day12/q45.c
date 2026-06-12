#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reverse = 0;

    while(n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
