#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);

    printf("Lowercase String = %s", str);

    return 0;
}
