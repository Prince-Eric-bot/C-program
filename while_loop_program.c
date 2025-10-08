/*
Name: Erick Mburu
Reg:PA106/G/28729/25
Desc:a C programme that uses for loop to print all numbers from 100 to 50 in a descending
*/

#include<stdio.h>

int main() {
	 int balance=1000;
	 int amount;
	 printf("Your current balance is %d\n", balance);
	 while(balance>0)
	 	
	 {printf("Enter amount to be withdraw: ");
	 scanf("%d, &amount");
	 balance -= amount;
		 
	 }
	  ("Insufficent balance");
	 
	 return 0;
}