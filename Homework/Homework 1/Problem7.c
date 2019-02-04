#include <stdio.h>

#define MAX_LEN 80

int main (int argc, char *argv[]) {
  char name[MAX_LEN];
  char age[MAX_LEN];
  char class_year[MAX_LEN];
  char ssn[MAX_LEN];
  char credit_card[MAX_LEN];
  char csv[MAX_LEN];

  printf ("Enter your name: ");
  scanf ("%s", name);
  printf("Enter your age: ");
  scanf ("%s", age);
  printf ("Enter your class year: ");
  scanf ("%s", class_year);
  printf("Enter your Social Security Number: ");
  scanf ("%s", ssn);  
  printf ("Enter your credit card number: ");
  scanf ("%s", credit_card);
  printf("Enter your csv: ");
  scanf ("%s", csv);
  printf ("Name: %s\n Age: %s\n Year: %s\n Social Security Number: %s\n Credit Card Number: %s\n CSV: %s\n", name, age, class_year, ssn, credit_card, csv);
  return 0;
}
