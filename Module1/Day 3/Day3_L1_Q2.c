#include <stdio.h>

int main() {
  // Scan a 32-bit integer
  int n;
  printf("Enter a 32-bit integer: ");
  scanf("%d", &n);

  // Print its bits
  printf("The bits are: ");
  for (int i = 31; i >= 0; i--) {
    // Use bitwise right shift and AND operators to get the ith bit
    int bit = (n >> i) & 1;
    printf("%d", bit);
  }
  printf("\n");
  
  return 0;
}