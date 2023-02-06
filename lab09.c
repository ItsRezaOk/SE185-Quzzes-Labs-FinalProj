//Reza Choudhury

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ncurses.h>
#define WORDLENGTH 11
#define MAXWORDS 100
#define DEBUGM 1 // Set this to 0 to disable debug output

// DO NOT MODIFY THIS FUNCTION
int read_words(char* WL[MAXWORDS], char* file_name);
// modifies str to trim white space off the right side
// DO NOT MODIFY THIS FUNCTION
void trimws(char* str);
void moveCurser(int top, int left, int bot, int right, int* x, int* y);
void clearSentence(void);



struct Sentence{
    char arr[80];
};
int main(int argc, char* argv[]) {
    char* wordlist[MAXWORDS];
    int wordcount;
    int i;
    int temp = 0;
    char tempSentence[150];
    bool Selected = false;
    int row= 0;
    int col = 0;
    int j = 0;
    int delay = 0;
    int c = 1000;
    struct Sentence statement[1000];
    int time, tri, circle, cross, square, rightJoyclick, leftJoyclick,options, share, r2,l2,r1,l1, LjoyX, LjoyY, RjoyX, RjoyY;
    wordcount = read_words(wordlist, argv[1]);
    initscr();
    if (DEBUGM) {
//while(
        printf("Read %d words from %s \n", wordcount, argv[1]);
        for (i = 0; i < wordcount; i++, row++) {
            if(i % 20 == 0 && i != 0){
                col += 20, row = 0;
            }

            mvprintw(row, col, "%15s", wordlist[i]);
            refresh();
        }
        printf("\n");
    }
// most of your code goes here. Do not forget to include the ncurses library
    col += 5;
    mvprintw(row, col, "%c", '>');
    refresh();
    while(1){
        wordlist[0] = "the";
        scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

        delay = time + 250;
        if((LjoyX <= 127 && LjoyX > 27) && (col + 20 < 80)){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }
            mvprintw(row,col,"%c",' ');
            refresh();
            col += 20;
            i += 20;
            mvprintw(row, col, "%c", '>');
            refresh();
        }
        else if((LjoyX >= -128 && LjoyX < -28) && (col - 20 >= 0)){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }
            mvprintw(row,col,"%c",' ');
            refresh();
            col -= 20;
            i -= 20;
            mvprintw(row, col, "%c", '>');
            refresh();
        }
        else if((LjoyY <= 127 && LjoyY > 27) && (row + 1 < 20)){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }

            mvprintw(row,col,"%c",' ');
            refresh();
            row++;
            i++;
            mvprintw(row, col, "%c", '>');
            refresh();
        }
        else if((LjoyY >= -128 && LjoyY < -28) && (row - 1 >= 0)){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d,%d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }
            mvprintw(row,col,"%c",' ');
            refresh();
            row--;
            i--;
            mvprintw(row, col, "%c", '>');
            refresh();
        }
        if(tri == 1){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }
            c -=1 ;
            strcpy(statement[c].arr,statement[c+1].arr);
            strcat(statement[c].arr," ");
            strcat(statement[c].arr,wordlist[i]);
            mvprintw(22,0,"%s",statement[c].arr);
            refresh();
        }
        else if(square == 1){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }
            c -= 1;
            strcpy(statement[c].arr,statement[c+1].arr);
            strcat(statement[c].arr,wordlist[i]);
            mvprintw(22,0,"%s",statement[c].arr);
            refresh();
        }
        else if(cross == 1){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }

            c += 1;
            clearSentence();
            mvprintw(22,0,"%s",statement[c].arr);
            refresh();
        }
        else if(leftJoyclick == 1 || rightJoyclick == 1){
            while(time < delay){
                scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &time, &tri, &circle, &cross, &square, &rightJoyclick, &leftJoyclick,&options, &share, &r2, &l2, &r1, &l1, &LjoyX, &LjoyY, &RjoyX, &RjoyY);

            }
            strcpy(statement[c].arr,"\0");
            clearSentence();
            mvprintw(22,0,"%s",statement[c].arr);
            refresh();
        }
    }
    return 0;
}



// DO NOT MODIFY THIS FUNCTION!
void trimws(char* str) {
    int length = strlen(str);
    int x;
    if (length == 0) return;
    x = length - 1;
    while (isspace(str[x]) && (x >= 0)) {
        str[x] = '\0';
        x -= 1;
    }
}
// DO NOT MODIFY THIS FUNCTION!
int read_words(char* WL[MAXWORDS], char* file_name)
{
    int numread = 0;
    char line[WORDLENGTH];
    char *p;
    FILE* fp = fopen(file_name, "r");
    while (!feof(fp)) {
        p = fgets(line, WORDLENGTH, fp);
        if (p != NULL)
        {
            trimws(line);
            WL[numread] = (char *)malloc(strlen(line) + 1);
            strcpy(WL[numread], line);
            numread++;
        }
    }
    fclose(fp);
    return numread;
}

void clearSentence(void){

    for(int row = 22;row <80; row++){
        for(int col = 0; col < 80; col++){
            mvprintw(row,col,"%c",' ');
            refresh();
        }
    }
}
