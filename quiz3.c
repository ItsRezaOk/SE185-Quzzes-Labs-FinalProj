#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Part 1

int main(){
	int score;
	printf("enter your grade: ");
	scanf("%d", &score);
	if((score <= 0)&&(score >= 100)){
		printf("error, not a valid grade");
	}
	
	if((score >= 93)&&(score <= 100)){
		printf("Grade: A");
	}
	else if((score >= 90)&&(score <=92)){
		printf("Grade: A-");
	}
	else if((score >= 86)&&(score <=89)){
		printf("Grade: B+");
	}
	else if((score >= 83)&&(score <=85)){
		printf("Grade: B");
	}
	else if((score >= 80)&&(score <=82)){
		printf("Grade: B-");
	}
	else if((score >= 76)&&(score <=79)){
		printf("Grade: C+");
	}
	else if((score >= 73)&&(score <=75)){
		printf("Grade: C");
	}
	else if((score >= 70)&&(score <=72)){
		printf("Grade: C-");
	}
	else if((score >= 66)&&(score <=69)){
		printf("Grade: D+");
	}
	else if((score >= 63)&&(score <=65)){
		printf("Grade: D");
	}
	else if((score >= 60)&&(score <=62)){
		printf("Grade: D-");
	}
	else if((score >= 0)&&(score <=59)){
		printf("Grade: F");
	}
	else{
		printf("error");
	}
return 0;
	
}

//Part 2

int main(){
	char str1[20];
	char str2[12];
	strcpy(str1, "se185@iastate.edu");
	strcpy(str2, "ds4rd");
	char str4[12];
	char str3[20];
	printf("Enter your username:");
	scanf("%s", &str3);
	printf("Enter your password:");
	scanf("%s", &str4);
	
	if(strcmp(str3,"se185@iastate.edu")){
		if(strcmp(str4,"ds4rd")){
			printf("incorrect password");
		}
		else{
			printf("success!");
		}
	}
	else{
		printf("incorrect username");
	}
	return 0;
}