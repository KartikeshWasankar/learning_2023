#include <stdio.h>


void find_digits(int arr[], int n) {

  int smallest = -1;
  int largest = -1;

  for (int i = 0; i < n; i++) {
   
    int num = arr[i];

    if (num < 0 || num > 999999999) {
      printf("Not Valid\n");
      return;
    }
  
    while (num > 0) {

      int digit = num % 10;

      if (smallest == -1 || digit < smallest) {
        smallest = digit;
      }
      if (largest == -1 || digit > largest) {
        largest = digit;
      }

      num = num / 10;
    }
  }
  // Print the smallest and largest digits
  printf("%d and %d\n", smallest, largest);
}

int main() {

  int arr1[] = {8, 156, 123450};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  find_digits(arr1, n1); 

  int arr2[] = {123, -456, 789};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  find_digits(arr2, n2); 

  int arr3[] = {1234567890, 987654321, 111111111};
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  find_digits(arr3, n3); 

  return 0;
}