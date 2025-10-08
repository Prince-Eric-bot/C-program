/*
Name: Erick Mburu
Reg:PA106/G/28729/25
Desc:a C programme that uses for loop to print all numbers from 100 to 50 in a descending
*/

#include<stdio.h>

#include <stdio.h>

int main() {
    int password;
    
    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);
    
    printf("Access Granted\n");
    
    return 0;
}
