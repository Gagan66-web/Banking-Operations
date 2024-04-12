#include <stdio.h>
#include <math.h>

float calculateFDMaturity(float principal, float rate, float tenure, int frequency) {
    float maturity_amount, interest_earned;
    float r = rate / (100 * frequency);
    float n = frequency * tenure;

    maturity_amount = principal * pow(1 + r, n);
    interest_earned = maturity_amount - principal;

    if (tenure < 5) {
        float penalty = maturity_amount * 0.005;
        printf("Penalty (0.5%%): %.2f\n", penalty);
        maturity_amount -= penalty;
    }

    printf("Maturity Amount: %.2f\n", maturity_amount);
    printf("Interest Earned: %.2f\n", interest_earned);

    return maturity_amount;
}
