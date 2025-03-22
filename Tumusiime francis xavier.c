#include <stdio.h>

int main() {
    int balance = 50000;   // Initial account balance
    int withdraw = 20000;  // Amount to withdraw

    printf("Initial balance:%d\n", balance);
    printf("Amount to withdraw:%d\n", withdraw);

    // Perform withdrawal
    if (withdraw <= balance) {
        balance -= withdraw; // Subtract withdrawal from balance
        printf("Withdrawal successful!\n");
        printf("Remaining balance:%d\n", balance);
    } else {
        printf("Withdrawal failed! Insufficient balance.\n");
    }

    return 0;
}
