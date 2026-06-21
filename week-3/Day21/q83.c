#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student s[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter Roll and Name: ");
        scanf("%d %s", &s[i].roll, s[i].name);
    }

    printf("\nStudent Records\n");

    for(int i = 0; i < 3; i++) {
        printf("%d %s\n", s[i].roll, s[i].name);
    }

    return 0;
}
