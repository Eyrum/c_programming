#include <stdio.h>

int main(void)
{
  float loan = 0.0f;
  float rate = 0.0f;
  float monthlyPayment = 0.0f;

  printf("Eneter amount of loan: ");
  scanf("%f", &loan);
  
  printf("Eneter interest rate: ");
  scanf("%f", &rate);
  
  printf("Eneter monthly payment: ");
  scanf("%f", &monthlyPayment);

  loan = loan - monthlyPayment + (loan * rate / 100.0 / 12.0);
  printf("Balance remaining after first payment: $%.2f \n", loan);

  loan = loan - monthlyPayment + (loan * rate / 100.0 / 12.0);
  printf("Balance remaining after second payment: $%.2f \n", loan);

  loan = loan - monthlyPayment + (loan * rate / 100.0 / 12.0);
  printf("Balance remaining after third payment: $%.2f \n", loan);
  
  return 0;
}
