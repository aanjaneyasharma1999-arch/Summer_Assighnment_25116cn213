#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers:\n");

    for(int num = start; num <= end; num++) {
        int temp = num, digits = 0;
        int sum = 0, remainder;

        while(temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}
