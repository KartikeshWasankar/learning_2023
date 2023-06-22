#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[20];
    int roll;
    float marks;
};

void swap(struct Student *s1, struct Student *s2) {
    
    struct Student temp;
    
    temp = *s1;
    
    *s1 = *s2;
    
    *s2 = temp;
}

int main() {
    
    struct Student stu1 = {"Sahil", 112, 85.5};
    struct Student stu2 = {"Arun", 122, 90.0};
    
    printf("Before swapping:\n");
    printf("stu1: name = %s, roll = %d, marks = %.2f\n", stu1.name, stu1.roll, stu1.marks);
    printf("stu2: name = %s, roll = %d, marks = %.2f\n", stu2.name, stu2.roll, stu2.marks);
    
    swap(&stu1, &stu2);
    
    printf("After swapping:\n");
    printf("stu1: name = %s, roll = %d, marks = %.2f\n", stu1.name, stu1.roll, stu1.marks);
    printf("stu2: name = %s, roll = %d, marks = %.2f\n", stu2.name, stu2.roll, stu2.marks);
    
    return 0;
}
