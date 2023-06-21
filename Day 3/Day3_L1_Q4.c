#include <stdio.h>


int largest_number(int n) {
 
  int largest = 0;
  
  for (int i = 0; i < 4; i++) {
    
    int num = (n / (10 * (i + 1))) * (10 * i) + (n % (10 * i));
   
    if (num > largest) {
      largest = num;
    }
  }

  return largest;
}

int main() {

  printf("%d\n", largest_number(5872)); 
  printf("%d\n", largest_number(9856)); 
  return 0;
}
