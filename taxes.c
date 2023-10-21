/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }
{
  //TODO: compute the tax, child credit, and total tax here
 
  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);
}
 if (agi>=19901 && agi <=81050){
   if(numChildren==0){
   totalTax=(agi/100) *12.2;
  printf("AGI:          $%12.2f\n", agi);
  printf("Tax:          $%12.2f\n", tax);
  printf("Child Credit: $12.2f\n", childCredit);
  printf("Total tax:    $%12.2f\n",totalTax);
 }
  return 0;
 }
 printf("\n", numChildren);

 else if(agi>=81051 || agi<=172,750);
}
