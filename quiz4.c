#include<stdio.h> 
#include<string.h>

//Part 1

int main() { 
 
    char letter = 97; 
 
    for(letter = 97; letter <= 122;letter++) { 
        printf("%c\n" , letter); 
    } 
 
    return 0; 
} 


void replace_char(char *string, char replace, char new);

//Part 2

int main(void)	{
	char s1[49];
	printf("please enter a password: ");
	scanf("%s", &s1);
	replace_char(s1, 's', '$');
	replace_char(s1, 'B', '8');
	replace_char(s1, 'm', 'M');
	replace_char(s1, 'a', '@');
	replace_char(s1, 'i', '1');
	
	
	printf("your password: %s\n", s1);
	return 0;
}
	
	
void replace_char(char *string, char replace, char new){
	int slen = strlen(string);
	for (int i = 0; i  < slen; i++){
		if (string[i] == replace){
			string[i] = new;
		}
	}
}