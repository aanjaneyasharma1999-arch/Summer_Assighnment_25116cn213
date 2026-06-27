#include <stdio.h>
#include <string.h>

int main() {
    char name[5][30], temp[30];

    printf("Enter 5 names:\n");

    for(int i = 0; i < 5; i++)
        scanf("%s", name[i]);

    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");

    for(int i = 0; i < 5; i++)
        printf("%s\n", name[i]);

    return 0;
}
