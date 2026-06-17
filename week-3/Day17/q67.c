#include <stdio.h>
#include <string.h>

int main() {
    char str[100], copy[100];

    printf("Enter string: ");
    gets(str);

    strcpy(copy, str);
    strrev(copy);

    if(strcmp(str, copy) == 0)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}
