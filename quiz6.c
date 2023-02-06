#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
   char *str1;
   char *str2;
   char *str3;
   char Fname[20];
   char Lname[20];
   
   
   printf("enter your first name: ");
   scanf("%s", &Fname);
   printf("enter your last name: ");
   scanf("%s", &Lname);
   

   str1 = (char *) malloc(20);
   strcpy(str1, Fname);
   printf("First Name = %s,  Address = %u\n", str1, str1);
   
   str2 = (char *) malloc(20);
   strcpy(str2, Lname);
   printf("Last Name = %s,  Address = %u\n", str2, str2);
   
   str1 = (char *) realloc(str1, 25);
   str2 = (char *) realloc(str2, 25);
   
   strcpy(str3, str1);
   //strcat(str3," ");
   strcat(str3, str2);
   printf("Full Name = %s,  Address = %u\n", str3, str3);

   free(str1);
   
   return(0);
