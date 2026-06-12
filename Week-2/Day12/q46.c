#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, digits = 0, sum = 0, rem;

    while(original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

    while(original != 0) {
        rem = original % 10;
        sum += pow(rem, digits);
        original /= 10;
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
