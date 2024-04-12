#ifndef ACCOUNT_H
#define ACCOUNT_H

#define MAX_DAYS 31

typedef struct {
    int day;
    char month[10];
    float amount;
} Transaction;

void deposit(float balances[3][MAX_DAYS], Transaction *t);
void withdraw(float balances[3][MAX_DAYS], Transaction *t);
float getBalance(float balances[3][MAX_DAYS], int day, char *month);

#endif
