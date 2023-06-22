#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchStudentByName(const struct Student* students, int numStudents, const char* targetName);

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    char targetName[20];
    printf("Enter the name to search: ");
    scanf("%19s", targetName);  

    int result = searchStudentByName(students, numStudents, targetName);

    if (result != -1) {
        printf("Student found:\n");
        printf("Roll No: %d\n", students[result].rollno);
        printf("Name: %s\n", students[result].name);
        printf("Marks: %.2f\n", students[result].marks);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}

int searchStudentByName(const struct Student* students, int numStudents, const char* targetName) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, targetName) == 0) {
            return i; 
        }
    }
    return -1; 
}