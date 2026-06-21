#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alpha = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i]))
            alpha++;
        else if(isdigit(str[i]))
            digit++;
        else if(str[i] != ' ')
            special++;
    }

    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d", special);

    return 0;
}
