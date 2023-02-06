#include <stdio.h>  
#include <stdlib.h>  
  
//Part 1

int main()  
{  
    int num = 11;
	int *myPtr;
	*myPtr = num;
	printf("num is stored at: %u\n", myPtr);
	printf("myPtr is stored at: %p\n", myPtr);
	printf("num hold the value: %d\n", num);
	printf("myPtr holds the value: %d\n", *myPtr);
	printf("myPtr points to: num\n");	
}  

//Part 2

int main() {
    int copy_a = 15;
	int *ptr_a;
	*ptr_a = copy_a;
	
    copy_a /= 3;
    *ptr_a = copy_a;
    copy_a++;
    *ptr_a = copy_a;
    if(*ptr_a == copy_a) {
        printf("Copy_a = %d\n" , *ptr_a);
        printf("a = %d\n" , copy_a);
        printf("Therefore, copy_a = a = %d\n" , *ptr_a);
    }
    return 0;
}