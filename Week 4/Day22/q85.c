#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("student.txt", "w");

    if(fp == NULL) {
        printf("File cannot be created");
        return 1;
    }

    fprintf(fp, "Hello, this is File Handling in C.");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}
