#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size]; // Temporary storage for swapping

    // Copy the data from 'a' to 'temp'
    char *tempPtr = (char *)temp;
    char *aPtr = (char *)a;
    for (size_t i = 0; i < size; i++) {
        tempPtr[i] = aPtr[i];
    }

    // Copy the data from 'b' to 'a'
    char *bPtr = (char *)b;
    for (size_t i = 0; i < size; i++) {
        aPtr[i] = bPtr[i];
    }

    // Copy the data from 'temp' to 'b'
    for (size_t i = 0; i < size; i++) {
        bPtr[i] = tempPtr[i];
    }
}

int main() {
    int a = 2;
    int b = 6;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);

    double c = 3.1;
    double d = 5.3;
    printf("Before swapping: c = %f, d = %f\n", c, d);
    swap(&c, &d, sizeof(double));
    printf("After swapping: c = %f, d = %f\n", c, d);

    return 0;
}