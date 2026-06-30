#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {

    struct Student s[100];
    int n, i;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        printf("\n----- Student %d -----\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks of 3 Subjects: ");
        scanf("%d %d %d",
              &s[i].marks[0],
              &s[i].marks[1],
              &s[i].marks[2]);

        s[i].total = s[i].marks[0] +
                     s[i].marks[1] +
                     s[i].marks[2];

        s[i].percentage = s[i].total / 3.0;
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for(i = 0; i < n; i++) {

        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);

        printf("Marks       : %d %d %d\n",
               s[i].marks[0],
               s[i].marks[1],
               s[i].marks[2]);

        printf("Total       : %d\n", s[i].total);
        printf("Percentage  : %.2f%%\n", s[i].percentage);

        if(s[i].percentage >= 90)
            printf("Grade       : A+\n");
        else if(s[i].percentage >= 75)
            printf("Grade       : A\n");
        else if(s[i].percentage >= 60)
            printf("Grade       : B\n");
        else if(s[i].percentage >= 40)
            printf("Grade       : C\n");
        else
            printf("Grade       : Fail\n");
    }

    return 0;
}
