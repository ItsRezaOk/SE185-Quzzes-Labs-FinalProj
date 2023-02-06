#include<math.h>
#include<stdio.h>
//Reza Choudhury
int main(){
		//printf("string format", argument);
	long phoneNum;
	printf("Please enter the 10 digits phone number : ");
	scanf("%ld", &phoneNum);
	printf("%ld", phoneNum);
	int userNum = phoneNum % 10000;
	int temp1 = phoneNum / 10000;
	int midNum = temp1 % 1000;
	int temp2 = temp1 / 1000;
	int areaC = temp2 % 1000;
	printf("Area code : %d\n", areaC);
	printf("Exchange code : %d\n", midNum);

	printf("User number : %d\n", userNum);
	return 0;
	}



//Reza Choudhury
double main(){
	double schoolX = 15.15;
	double schoolY = 55.15;
	double mikeX = 22.05;
	double mikeY = 85.10;
	double maryX = 43.35;
	double maryY = 9.80;
	double garyX = 2.55;
	double garyY = 72.86;
	double loganX = 15.15;
	double loganY = 40.40;

	double distMike = pow((mikeX - schoolX),2) + pow((mikeY - schoolY),2);
	double sdistMike = sqrt(distMike);
	double distMary = pow((maryX - schoolX),2) + pow((maryY - schoolY),2);
	double sdistMary = sqrt(distMary);
	double distGary = pow((garyX - schoolX),2) + pow((garyY - schoolY),2);
	double sdistGary = sqrt(distGary);
	double distLogan = pow((loganX - schoolX),2) + pow((loganY - schoolY),2);
	double sdistLogan = sqrt(distLogan);

	printf("The E distance for Mike is : %lf\n", sdistMike);
	printf("The E distance for Mary is : %lf\n", sdistMary);
	printf("The E distance for Gary is : %lf\n", sdistGary);
	printf("The E distance for Logan is : %lf\n", sdistLogan);
	return 0;
}