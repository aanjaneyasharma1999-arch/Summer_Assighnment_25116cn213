#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("student.txt", "r");

    if(fp == NULL) {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
        count++;

    fclose(fp);

    printf("Total Characters = %d", count);

    return 0;
}
