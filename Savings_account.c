#include <stdio.h>
#include "account.h"

#define INTEREST_RATE 0.035
#define DAYS_IN_YEAR 365

float calculateSavingsInterest(float balances[3][MAX_DAYS], int month_days[3]) {
    float interest, total_interest = 0.0;
    int days_in_month, i, j;

    for (i = 0; i < 3; i++) {
        days_in_month = month_days[i];
        printf("\nMonth %d:\n", i + 1);
        printf("Day\tBalance\tDays\tInterest\n");

        for (j = 0; j < days_in_month; j++) {
            interest = balances[i][j] * (j + 1) * INTEREST_RATE / DAYS_IN_YEAR;
            printf("%d\t%.2f\t%d\t%.2f\n", j + 1, balances[i][j], j + 1, interest);
            total_interest += interest;
            balances[i][j + 1] = balances[i][j] + interest;
        }
    }

    return total_interest;
}
