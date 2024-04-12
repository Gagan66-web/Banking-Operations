#include <stdio.h>
#include <string.h>
#include "account.h"
#include "savings.h"
#include "fixed_deposit.h"
#include "home_loan.h"

int main() {
    float balances[3][MAX_DAYS] = {0};
    int month_days[3] = {30, 31, 30};
    int choice, day;
    char month[10];
    Transaction t;
    float principal, rate, tenure;
    float total_interest, maturity_amount;

    balances[0][0] = 50000.0; // Initial balance for April

    do {
        printf("PES1UG23ME018");
        printf("\nBanking Operations\n");
        printf("1. Deposit\n");
        printf("2. Withdrawal\n");
        printf("3. Balance Check\n");
        printf("4. Interest Calculation of Savings Account\n");
        printf("5. Calculation of Interest and Maturity Amount of FD Account\n");
        printf("6. Home Loan EMI Calculation\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter date (day): ");
                scanf("%d", &t.day);
                printf("Enter month: ");
                scanf("%s", t.month);
                printf("Enter amount: ");
                scanf("%f", &t.amount);
                deposit(balances, &t);
                break;
            case 2:
                printf("Enter date (day): ");
                scanf("%d", &t.day);
                printf("Enter month: ");
                scanf("%s", t.month);
                printf("Enter amount: ");
                scanf("%f", &t.amount);
                withdraw(balances, &t);
                break;
            case 3:
                printf("Enter date (day): ");
                scanf("%d", &day);
                printf("Enter month: ");
                scanf("%s", month);
                printf("Balance on %s %d: %.2f\n", month, day, getBalance(balances, day, month));
                break;
            case 4:
                total_interest = calculateSavingsInterest(balances, month_days);
                printf("Total Interest Earned on Savings Account: %.2f\n", total_interest);
                break;
            case 5:
                printf("Enter principal amount: ");
                scanf("%f", &principal);
                printf("Enter interest rate (%%): ");
                scanf("%f", &rate);
                printf("Enter tenure (years): ");
                scanf("%f", &tenure);
                maturity_amount = calculateFDMaturity(principal, rate, tenure, 2);
                break;
            case 6:
                printf("Enter principal loan amount: ");
                scanf("%f", &principal);
                printf("Enter interest rate (%%): ");
                scanf("%f", &rate);
                printf("Enter tenure (months): ");
                scanf("%f", &tenure);
                calculateHomeLoanEMI(principal, rate, tenure);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
