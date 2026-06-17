#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    strrev(str);

    printf("Reversed String = %s", str);

    return 0;
}
