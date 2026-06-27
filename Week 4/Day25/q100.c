#include <stdio.h>
#include <string.h>

int main() {
    char word[5][30], temp[30];

    printf("Enter 5 words:\n");

    for(int i = 0; i < 5; i++)
        scanf("%s", word[i]);

    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("\nWords Sorted by Length:\n");

    for(int i = 0; i < 5; i++)
        printf("%s\n", word[i]);

    return 0;
}
