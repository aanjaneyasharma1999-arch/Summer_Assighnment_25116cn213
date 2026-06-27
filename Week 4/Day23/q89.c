#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        flag = 0;
        for(j = 0; str[j] != '\0'; j++) {
            if(i != j && str[i] == str[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("First Non-Repeating Character = %c", str[i]);
            return 0;
        }
    }

    printf("No Non-Repeating Character Found");
    return 0;
}
