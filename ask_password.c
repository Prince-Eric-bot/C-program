/*
NAME:Erick Mburu
REG NO:PA106/G/28769/25
DESCRIPTION:ask password
*/

 #include <stdio.h>
 int main(){
 	int password;
    
 	do{
		 printf("Enter your password:");
		 scanf("%d",& password);
	 }while(password!=1234);
	 
	 printf("Access granted\n");
			 
 	
	 return 0;
 }
