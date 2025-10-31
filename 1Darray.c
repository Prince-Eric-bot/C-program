/*
Name: Erick Mburu Njogu
Reg: PA106/G/28729/25
Desc: 1Darray
*/

#include <stdio.h>

int main(){
    printf("---WEEKLY REVENUE---\n");
    int revenue[7], i, sum=0, average;
    
    for( i = 0; i<7; i++){
        printf("Enter revenue for day %d:",i+1);
        scanf("%d", &revenue[i]);
        sum +=revenue[i];
    }
    average= sum / 7;
    printf("\nThe total weekly revenue is %d\n", sum);
    printf("The average daily revenue is %d", average);
    
    return 0;
}