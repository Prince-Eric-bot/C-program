// Simple C program
/*
Name: Erick Mburu Njogu
Reg: PA106/G/28729/25
*/

#include <stdio.h>

int main() {
    int height;
    int idNumber;
    float balance;

    printf("Enter your height (centimeters): ");
    scanf("%d", &height);

    printf("Enter your ID number: ");
    scanf("%d", &idNumber);

    printf("Enter your bank account balance: ");
    scanf("%f", &balance);

    printf("Age: %d\n", height);
    printf("ID Number: %d\n", idNumber);
    printf("Bank Account Balance: %.2f\n", balance);

    return 0;
}