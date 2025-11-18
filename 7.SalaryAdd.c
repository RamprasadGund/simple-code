#include <stdio.h>

int totalsalary(int *arr, int n) {
    if (n==0) {
        return 0;
    }
    return arr[n-1] + totalsalary(arr, n - 1);
}

int main() {
    int salary[10];
    int count = 10;

    printf("\n*\n");
    printf("--------------- RG COMPANY SALARY SYSTEM ---------------\n");
    printf("*\n");

 
    for (int i = 1; i <= count; i++) {
        printf("ENTER SALARY OF EMPLOYEE %d: ", i);
        scanf("%d", &salary[i - 1]);
    }

    printf("*\n");

    
    int result = totalsalary(salary, count);

    printf("TOTAL SALARY TO BE PAID: %d\n", result);
    printf("\n\n");
    printf("THANK YOU! SALARY CALCULATION COMPLETED.\n");
    printf("\n");

    return 0;
}
