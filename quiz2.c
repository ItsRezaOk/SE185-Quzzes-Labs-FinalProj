#include<ctype.h>
#include<stdio.h>
#include<string.h>

//Part 1

int main(){
	char firstName[10];
	printf("Enter your first name: ");
	scanf("%s", &firstName);
	char lastName[10];
	printf("Enter your last name: ");
	scanf("%s", &lastName);
	char collegeMajor[10];
	printf("Enter your Major: ");
	scanf("%s", &collegeMajor);
	char collegeYear[10];
	printf("Enter your Year: ");
	scanf("%s", &collegeYear);
	char graduationYear[10];
	printf("Enter your graduation year: ");
	scanf("%s", &graduationYear);
	printf("\n\n");
	printf("Name (last, first): Name (%s, %s)\n", lastName, firstName);
	printf("Major: %s\n", collegeMajor);
	printf("Year: %s\n", collegeYear);
	printf("Graduation year: %s\n", graduationYear);
	
	
	return 0;
	}


	//PART 2

double drivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon){
	double galGas = drivenMiles / milesPerGallon;
	double drivingCost = galGas * dollarsPerGallon;\
	printf("Driving cost: %lf", drivingCost);
	return (drivingCost);
}
//Reza Choudhury
int main(){
	double drivenMiles;
	double milesPerGallon;
	double dollarsPerGallon;
	
printf("Enter driven miles: ");
	scanf("%lf", &drivenMiles);
	printf("Enter miles per gallon: ");
	scanf("%lf", &milesPerGallon);
	printf("Enter dollars per gallon: ");
	scanf("%lf", &dollarsPerGallon);
	drivingCost(drivenMiles, milesPerGallon, dollarsPerGallon);

	return 0;
}