#include <stdio.h>
int main() {
    int switch_state;
       printf("Enter switch state (0 for OFF, 1 for ON): ");
    scanf("%d", &switch_state);  
    if (switch_state == 1) {
        printf("The switch is ON.\n");
    }
    else if (switch_state == 0) {
        printf("The switch is OFF.\n");
    }
    else {
        printf("Invalid input! Please enter only 0 or 1.\n");
    }
   return 0;
      }


