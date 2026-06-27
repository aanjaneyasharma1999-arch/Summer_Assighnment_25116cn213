#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
        freq[(int)str[i]]++;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum Occurring Character = %c", ch);

    return 0;
}
