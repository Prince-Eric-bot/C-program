/*
Name: ERICK MBURU NJOGU
Reg No: PA106/G/28729/25
Description:program to check student's eligibility for final exam
*/

#include <stdio.h>

int main() {
    float attendance, marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &marks);

    if (attendance >= 75 && marks >= 40)
        printf("Eligible for exams\n");
    else
        printf("Not eligible\n");

    return 0;
}