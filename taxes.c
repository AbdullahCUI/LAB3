/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

{

  char c;

  double agi;

  float childCridet;
 int numOfchilderns;

 float tax;

 float totaltax;

  printf("Please Enter Agi-->");

  scanf("%lf", &agi);

  //remove newline

  getchar ();

  printf("Did You have Any children:( Y/N-->)");

  c=getchar();

  if (c=='Y' || c=='y'){
    printf("How many children=>");

    scanf("%d", &numOfchilderns);
  }
  if (agi>=0 && agi <=19900){

    crildCridet=200;
    tax=agi*0.10;
  } else if (agi>=19901 && agi <=81050){
    
    tax=1990+0.12 *(agi-19900);
  }

}
 


 
