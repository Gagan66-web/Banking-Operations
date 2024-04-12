#include <stdio.h>
#include <string.h>
#include "account.h"

void deposit(float balances[3][MAX_DAYS], Transaction *t) {
    int month_index;
    if (strcmp(t->month, "April") == 0) {
        month_index = 0;
    } else if (strcmp(t->month, "May") == 0) {
        month_index = 1;
    } else if (strcmp(t->month, "June") == 0) {
        month_index = 2;
    } else {
        printf("Invalid month\n");
        return;
    }

    balances[month_index][t->day - 1] += t->amount;
    printf("Deposit of %.2f successful on %s %d\n", t->amount, t->month, t->day);
}

void withdraw(float balances[3][MAX_DAYS], Transaction *t) {
    int month_index;
    if (strcmp(t->month, "April") == 0) {
        month_index = 0;
    } else if (strcmp(t->month, "May") == 0) {
        month_index = 1;
    } else if (strcmp(t->month, "June") == 0) {
        month_index = 2;
    } else {
        printf("Invalid month\n");
        return;
    }

    if (balances[month_index][t->day - 1] >= t->amount) {
        balances[month_index][t->day - 1] -= t->amount;
        printf("Withdrawal of %.2f successful on %s %d\n", t->amount, t->month, t->day);
    } else {
        printf("Insufficient balance on %s %d\n", t->month, t->day);
    }
}

float getBalance(float balances[3][MAX_DAYS], int day, char *month) {
    int month_index;
    if (strcmp(month, "April") == 0) {
        month_index = 0;
    } else if (strcmp(month, "May") == 0) {
        month_index = 1;
    } else if (strcmp(month, "June") == 0) {
        month_index = 2;
    } else {
        printf("Invalid month\n");
        return 0.0;
    }

    return balances[month_index][day - 1];
}
