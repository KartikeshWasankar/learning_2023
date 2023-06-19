//Using Ternary Operator

#include <stdio.h>
int main ()
{
    int num1, num2, temp;
    
    num1=20,num2=50;
    if(num1 == num2)
        printf("Both are Equal\n");
    else{
        temp = num1 > num2? num1 : num2;
        printf("%d is Greater",temp);
    }

  return 0;
}