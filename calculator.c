/**
 * Author:Abdullah
 * 
 * Date:2023/21/10
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1) {
//addition oparator
    result=a+b;
    printf("%f + %f =%.2f",a,b, result);
  } else if(choice == 2) {

    //subtraction oparator
    result = a - b;
    printf("%f - %f=%.2f",a,b, result);
  } else if(choice == 3) {
    //TODO: handle this case (multiplication)
  } else if(choice == 4) {
    //multiplication oparator

    result=a*b;

    printf("%f * %f =%.2f", a,b, result);
    //TODO: handle this case (division)
  } else if(choice == 5) {
    //TODO: handle this case (minimum)
  } else if(choice == 6) {
    //TODO: handle this case (log_a(b))
  } else {
    printf("Please input a valid operator next time");
  }

  return 0;
}
