/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2;
  float total,average;

  printf("Enter Mark 01 : ");
  scanf("%d",&mark1);

  printf("Enter Mark 02 : ");
  scanf("%d",&mark2);

  total = mark1 + mark2;
  average = total/2;

  printf("Average : %.2f",average);
  
  return 0;
}

