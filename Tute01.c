/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2;
  float avg;
  
  printf("Enter the sub1 markes: ");
  scanf("%d", &sub1);
   printf("Enter the sub2 markes: ");
  scanf("%d", &sub2);

  avg = (sub1 + sub2)/ 2.0;

  printf("average is = %.2f", avg);
  
  return 0;
}

