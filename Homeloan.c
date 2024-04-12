  #include <stdio.h>
#include <math.h>

void calculateHomeLoanEMI(float principal, float rate, float tenure) {
    float emi, total_interest, total_payment;
    float r = rate / (12 * 100);
    float n = tenure;

    emi = principal * r * pow(1 + r, n) / (pow(1 + r, n) - 1);
    total_interest = emi * n - principal;
    total_payment = emi * n;

    printf("EMI: %.2f\n", emi);
    printf("Total Interest Paid: %.2f\n", total_interest);
    printf("Total Payment: %.2f\n", total_payment);
}
