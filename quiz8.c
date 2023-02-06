
#include <stdio.h>
#include <stdlib.h>

//Part 1

typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

complex sub(complex n1, complex n2);

complex mult(complex n1, complex n2);


int main() {
    complex n1, n2, result, result2, result3;

    
    printf("Enter the real and imaginary parts n1: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("Enter the real and imaginary parts n2: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);
	result2 = sub(n1, n2);
	result3 = mult(n1, n2);

    printf("ADD = %.1f + %.1fi\n", result.real, result.imag);
	printf("SUB = %.1f + %.1fi\n", result2.real, result2.imag);
	printf("MULT = %.1f + %.1fi", result3.real, result3.imag);
	
	
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

complex sub(complex n1, complex n2){
	complex temp2;
	temp2.real = n1.real - n2.real;
	temp2.imag = n1.imag - n2.imag;\
	return (temp2);
}

complex mult(complex n1, complex n2){
	complex temp3;
	temp3.real = n1.real * n2.real;
	temp3.imag = n1.imag * n2.imag;\
	return (temp3);
}

\

// Part 2


typedef struct time {
    int hr = 0;
    int mie = 0;
}
void convTime(int sec, int *h, int *m, int *s);
void printTime(&hr, &mie, &sec);

void main() {
    time *mileTime;
    mileTime =(int*)malloc(2*sizeof(int));
    int seconds; 
    printf("Total seconds: ");
    scanf("%d", &seconds);
    int seconds = convTime(seconds, &time.hr, &time.mie); 
    printTime(h, m, seconds);
}
void convTime(int sec, int *h, int *m, int *s) {
	*h = (sec/3600); 
	
	int temp = *h
	*m = (sec -(3600 * temp))/60;
	
	int temp2 = *m
	*s = (sec -(3600 * temp)-(temp2 * 60));
}

 }
void printTime(int hr, int mi, int se) {
	printf("mile time is %d hours, %d minutes, and &d seconds", hr, mi, se);
}

}

