#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int numStudents);

int main() {
    int numStudents = 3;
    struct Student students[numStudents];

    initializeStudents(students, numStudents);

    printf("Student Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i+1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

void initializeStudents(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = i + 1;
        snprintf(students[i].name, sizeof(students[i].name), "Student %d", i+1);
        students[i].marks = 0.0;
    }
}
