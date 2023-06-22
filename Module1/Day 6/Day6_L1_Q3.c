#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student* students, int numStudents);

int main() {
    int numStudents = 3;
    struct Student students[numStudents];


    displayStudents(students, numStudents);

    return 0;
}

void displayStudents(const struct Student* students, int numStudents) {
    printf("Student Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}