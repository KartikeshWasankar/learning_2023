#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* inputString, struct Student* students, int numStudents);

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Clear the newline character from the input buffer

    struct Student* students = (struct Student*) malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 0;
    }

    for (int i = 0; i < numStudents; i++) {
        char inputString[100];
        printf("\nEnter details for student %d: ", i+1);
        fgets(inputString, sizeof(inputString), stdin);
        inputString[strcspn(inputString, "\n")] = '\0'; // Remove trailing newline

        parseString(inputString, &students[i], 1);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i+1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}

void parseString(const char* inputString, struct Student* students, int numStudents) {
    char temp[20];

    sscanf(inputString, "%d %s %f", &students->rollno, temp, &students->marks);

    strncpy(students->name, temp, sizeof(students->name) - 1);
    students->name[sizeof(students->name) - 1] = '\0';
}
