#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int count = 0;

void addStudent() {

    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;

    printf("\nStudent Added Successfully!\n");
}

void displayStudents() {

    if(count == 0) {
        printf("\nNo Records Found.\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for(int i = 0; i < count; i++) {

        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}

void searchStudent() {

    int roll;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++) {

        if(s[i].roll == roll) {

            printf("\nStudent Found\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);

            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found.\n");
}

void updateMarks() {

    int roll;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++) {

        if(s[i].roll == roll) {

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Marks Updated Successfully.\n");

            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found.\n");
}

void deleteStudent() {

    int roll;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++) {

        if(s[i].roll == roll) {

            for(int j = i; j < count - 1; j++) {

                s[j] = s[j + 1];
            }

            count--;

            printf("Student Deleted Successfully.\n");

            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found.\n");
}

int main() {

    int choice;

    do {

        printf("\n========== STUDENT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}
