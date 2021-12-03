#include <stdio.h>

int main(void) {
    //Task 2
    int price, tax, len, scam;
    printf("Subscription fee per minute of conversation: \n");
    scanf("%d", &price);
    printf("Subscription fee per minute over the limit: \n");
    scanf("%d", &tax);
    printf("Call duration: \n");
    scanf("%d", &len);

    if (len > 499) {
        scam = (price * 499 + tax * (len - 499));
    } else {
        scam = len * price;
    }
    printf("%\n");
    printf("The total cost: %d\n", scam);

    //Task 5
    printf("%\n");
    double s, p, m;
    printf("Enter how many months the deposit will be kept: \n");
    scanf("%lf", &m);
    printf("Enter the annual interest rate: \n");
    scanf("%lf", &p);
    printf("Enter the initial amount on your account: \n");
    scanf("%lf", &s);

    for (int i = 1; i < m + 1; i++) {
        s += s * (p / 100);
        printf("After %d month you'll have %f rubles\n", i, s);
    }
}
