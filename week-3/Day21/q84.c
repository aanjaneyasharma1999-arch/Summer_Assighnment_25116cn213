#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

void display(struct Student s) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
}

int main() {
    struct Student s;

    scanf("%d %s", &s.roll, s.name);

    display(s);

    return 0;
}
