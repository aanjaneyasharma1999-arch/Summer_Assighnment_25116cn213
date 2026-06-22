#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("student.txt", "a");

    if(fp == NULL) {
        printf("File not found");
        return 1;
    }

    fprintf(fp, "\nAppending new data.");

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}
