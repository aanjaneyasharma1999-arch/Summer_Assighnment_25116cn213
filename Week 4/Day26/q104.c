#include <stdio.h>

int main() {

    int score = 0, ans;

    printf("===== Simple Quiz =====\n");

    printf("\n1. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n2. Which symbol is used for comments?\n");
    printf("1. //\n2. ##\n3. **\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n3. Size of int is generally?\n");
    printf("1. 2\n2. 4\n3. 8\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}
