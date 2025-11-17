#include <stdio.h>
int main() {
char customerName[30], fuelType[10];
float rate, liters, total;
printf("===== FUEL BILL GENERATOR =====\n\n");
    //customer details
printf("Enter Customer Name: ");
 scanf("%s", customerName);
  // Get fuel details
  printf("Enter Fuel Type (Petrol/Diesel): ");
  scanf("%s", fuelType);
  printf("Enter Rate per Liter (Rs): ");
  scanf("%f", &rate);
  printf("Enter Quantity (Liters): ");
  scanf("%f", &liters);
// Calculate bill
 total = rate * liters;
// Print bill
printf("\n----- FUEL BILL -----\n");
printf("Customer Name : %s\n", customerName);
printf("Fuel Type      : %s\n", fuelType);
printf("Rate per Liter : Rs %.2f\n", rate);
printf("Quantity : %.2f Liters\n", liters);
printf("----------------------------\n");
printf("Total Amount   : Rs %.2f\n", total);
printf("----------------------------\n");
printf("Thank you! Visit again.\n");
return 0;
}

