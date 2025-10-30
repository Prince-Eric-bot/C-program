/*
Name: Erick Mburu
Reg:PA106/G/28729/25
Desc:a C programme checks for bank balnce
*/

#include <stdio.h>

int main(){

	int balance = 1000;
	int amount;

	while(balance>0)
	{
		printf("Your balance is %d\n",balance);
		
		printf("Enter amount to withdraw :");
		scanf("%d",&amount);
		 
		balance-=amount;
	}
		
		printf("insufficient balance");
		
	
	
	return 0;
	
}

