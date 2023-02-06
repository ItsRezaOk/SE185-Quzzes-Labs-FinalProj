#include <stdio.h> 
#include <strings.h>
//Reza Choudhury
//Part 1
int main() { 
    int exam[3], j, hw[5], i;
	int counter = 0;
    float avg1 = 0.0;
	float avg2 = 0.0;
    for (i=1;i<6;i++){
		printf("Enter your grade (%%) for HW #0%d:   ", i); 
		scanf(" %d" , &hw[counter]);
		avg1 += hw[counter];
		counter++;
		
	}
	
	int counter2 = 0;
	for (j=1;j<4;j++){
		printf("Enter your grade (%%) for Exam #0%d:  ", j); 
		scanf(" %d" , &exam[counter2]); 
		avg2 += exam[counter2];
		counter2++;
	}
	avg1 /= 5;
	printf("homework average: %lf\n", avg1);
	
	avg2 /= 3;
	printf("exam average: %lf\n", avg2);
	printf("total average: %lf", ((avg1 + avg2) / 2));
	
    return 0; 
}
 
//Part 2
int main(){
	int R = 2;
	int C = 8;
	float sGrades[R][C];
	//double AVG = 0;
	int counter= 0;
	int input[100];
	for(int i=1; i<3; i++){
		for(int j=1; j<5; j++){
			printf("student %d assignment %d ", i, j);
			scanf("%d", &input[counter]);
			sGrades[i][j]+= input[counter];
			//printf("%lf", sGrades[i][j]);
			//printf("%d\n", input[counter]);
			counter++;
			
		}	
	}
	float avg1 = 0;
	float avg2 = 0;
	for(int k=1;k<5;k++){
		avg1 += sGrades[1][k];
		avg2 += sGrades[2][k];
		//printf(" Average is %lf, and the Grade is: %lf\n", avg1, sGrades[2][k]);
	}
		avg1 /= 4;
		avg2 /= 4;
		printf("Student 1 avg is %lf\n", avg1);
		printf("Student 2 avg is %lf\n", avg2);
		
		if((avg1 >= 93)&&(avg1 <= 100)){
			printf("Grade Student 1: A\n");
		}	
		else if((avg1 >= 90)&&(avg1 <=92)){
			printf("Grade Student 1: A-\n");
		}
		else if((avg1 >= 86)&&(avg1 <=89)){
			printf("Grade Student 1: B+\n");
		}
		else if((avg1 >= 83)&&(avg1 <=85)){
			printf("Grade Student 1: B\n");
		}
		else if((avg1 >= 80)&&(avg1 <=82)){
			printf("Grade Student 1: B-\n");
		}
		else if((avg1 >= 76)&&(avg1 <=79)){
			printf("Grade Student 1: C+\n");
		}
		else if((avg1 >= 73)&&(avg1 <=75)){
			printf("Grade Student 1: C\n");
		}
		else if((avg1 >= 70)&&(avg1 <=72)){
			printf("Grade Student 1: C-\n");
		}
		else if((avg1 >= 66)&&(avg1 <=69)){
			printf("Grade Student 1: D+\n");
		}
		else if((avg1 >= 63)&&(avg1 <=65)){
			printf("Grade Student 1: D\n");
		}
		else if((avg1 >= 60)&&(avg1 <=62)){
			printf("Grade Student 1: D-\n");
		}
		else if((avg1 >= 0)&&(avg1 <=59)){
			printf("Grade Student 1: F\n");
		}
		
		
		if((avg2 >= 93)&&(avg2 <= 100)){
			printf("Grade Student 2: A");
		}	
		else if((avg2 >= 90)&&(avg2 <=92)){
			printf("Grade Student 2: A-");
		}
		else if((avg2 >= 86)&&(avg2 <=89)){
			printf("Grade Student 2: B+");
		}
		else if((avg2 >= 83)&&(avg2 <=85)){
			printf("Grade Student 2: B");
		}
		else if((avg2 >= 80)&&(avg2 <=82)){
			printf("Grade Student 2: B-");
		}
		else if((avg2 >= 76)&&(avg2 <=79)){
			printf("Grade Student 2: C+");
		}
		else if((avg2 >= 73)&&(avg2 <=75)){
			printf("Grade Student 2: C");
		}
		else if((avg2 >= 70)&&(avg2 <=72)){
			printf("Grade Student 2: C-");
		}
		else if((avg2 >= 66)&&(avg2 <=69)){
			printf("Grade Student 2: D+");
		}
		else if((avg2 >= 63)&&(avg2 <=65)){
			printf("Grade Student 2: D");
		}
		else if((avg2 >= 60)&&(avg2 <=62)){
			printf("Grade Student 2: D-");
		}
		else if((avg2 >= 0)&&(avg2 <=59)){
			printf("Grade Student 2: F");
		}
		
	return 0;
}
