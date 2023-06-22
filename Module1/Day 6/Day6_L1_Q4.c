#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int compare(const void* a, const void* b);
void sortStudents(struct Student* students, int numStudents);

int main() {
    int numStudents = 3;
    struct Student students[numStudents];

   
    sortStudents(students, numStudents);

    printf("Student Details (Sorted by Marks in Descending Order):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

int compare(const void* a, const void* b) {
    struct Student* studentA = (struct Student*)a;
    struct Student* studentB = (struct Student*)b;

    if (studentA->marks > studentB->marks)
        return -1;
    else if (studentA->marks < studentB->marks)
        return 1;
    else
        return 0;
}

void sortStudents(struct Student* students, int numStudents) {
    qsort(students, numStudents, sizeof(struct Student), compare);
}