/*
NAME:Erick Mburu
REG NO:PA106/G/28729/25
DEFINITION:A program to calculate fare
*/

#include<stdio.h>

int calculate_fare(int distance);

int main(){
	int distance;
	
	printf("Enter distance traveled(in KM):");
	scanf("%d", &distance);
	
	printf("Total fare is:KSh. %.2f\n",calculate_fare(distance));
	
	return 0;
}
int calculate_fare(int distance){
	int fare;
	fare = distance*10;
	
	return fare;
	
}
