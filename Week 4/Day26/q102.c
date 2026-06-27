#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("\nName : %s\n", name);

    if(age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");

    return 0;
}
