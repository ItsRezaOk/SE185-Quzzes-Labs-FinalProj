#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 
#define SIZE 20
#define ROWS 4
#define COLS 5
 
 
 //Reza Choudhury 
 //Blake Clabaugh 
 //Ram Ganesh 
 //Om Sanghvi 
void leaderboard(int numMoves, int totRounds[], int x);
void initArray();
void printCards(int arr[], int taken[], int arrSize); 
void shuffle(int arr[], int arrSize); 
void insertionSort(int arr[], int n);
void printArray(int arr[], int n);
 
 
/*void insertionSort(int arr[], int n){
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

	
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print
// an array of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
void leaderboard(int numMoves, int totRounds[int x]){
{
	totRounds[x] = numMoves;
	int n = sizeof(totRounds) / sizeof(totRounds[0]);

	insertionSort(totRounds, n);
	printArray(totRounds, n);

FILE *myFile;
	myFile = fopen("leaderboard.txt", "w");
		fprintf(myFile, "%d: %d", x, numMoves);
		fclose(myFile);		

}*/
 
int main() {
    int moves = 0;
	int z;
	int rounds[100];
    int running = 0;
    int gameBoard[SIZE] = {0};
    int taken[SIZE] = {0}; 
     
    printf("\nWelcome to memory!\n");
     
    int cardRow[2], cardCol[2];
     
    initArray(gameBoard);
    shuffle(gameBoard, SIZE);
     
    printCards(gameBoard, taken, SIZE);
    do {
        printf("\n\nFlip two cards"); 
        printf("\nInput row and column for the first card: "); 
        scanf("%d %d", &cardRow[0], &cardCol[0]); 
        printf("\nInput row and column for the second card: "); 
        scanf("%d %d", &cardRow[1], &cardCol[1]); 
         
        int getCardIndex1 = cardRow[0]*COLS + cardCol[0];
        int getCardIndex2 = cardRow[1]*COLS + cardCol[1];
     
        int getCard1 = gameBoard[getCardIndex1]; 
        int getCard2 = gameBoard[getCardIndex2]; 
         
        if (taken[getCardIndex1] == 1 || 
            taken[getCardIndex2] == 1) {
            printf("\nThis card is already flipped!\n");
        }
         
        // If the first card is the same as the second card. It is a match. 
        if (getCard1 == getCard2 && 
           (cardRow[0] != cardRow[1] || cardCol[0] != cardCol[1])) {
            printf("\nMatch!\n");
             
            taken[cardRow[0]*COLS + cardCol[0]] = 1;
            taken[cardRow[1]*COLS + cardCol[1]] = 1;
        }
        else {
            printf("\nNo match!\n");
        }
         
        // Check if the user has picked a position outside of the board
        if (cardRow[0] < 0 || cardRow[0] > 2 || cardRow[1] < 0 || cardRow[1] > 2 ||
            cardCol[0] < 0 || cardCol[0] > 3 || cardCol[1] < 0 || cardCol[1] > 3) {
            printf("\nYou have picked a position outside the board!\n");        
        }
     
        // If the user has enetered the same row and column twice
        if (cardRow[0] == cardRow[1] && cardCol[0] == cardCol[1]) {
            printf("\nYou have not choosen two different cards!");
        }
        else {
            printf("\nCard1 is %d and Card2 is %d", getCard1, getCard2);
			moves++;
        }
         
        // Check if all elements`	 in array taken has the value 1 (true)
        int allPairsTaken, hasWon;
        for (allPairsTaken = 0; allPairsTaken < SIZE; allPairsTaken++) {
            if (taken[allPairsTaken] == 1) {
                hasWon = 1;
				z++;
            }
            else {
                hasWon = 0;    
            }
        }
         
        if (hasWon == 1) {
            printf("\nYou have won!");    
            running = -1;
			//leaderboard(moves, rounds[z]);
        }
         
        printCards(gameBoard, taken, SIZE); 
 
 
     
    } while (running != -1); 
 
 
    return 0;
}
 
 
void initArray(int arr[]) {
    // Fill an array with pairs of 1, 2, 3, ..., 9
    int i;
    int fillNumbers = 0; 
    for (i = 0; i < SIZE; i++) {
        arr[i] = i;
         
        if (i >= 10) {
            arr[i] = fillNumbers; 
            fillNumbers++;
        }
    }
}
 
 
 
void shuffle(int arr[], int arrSize) {
    srand((unsigned int)time(NULL));
     
    int i;
    for (i = arrSize - 1; i > 0; i--) {
        int randNum = rand() % (i + 1);
        int temp = arr[i]; 
        arr[i] = arr[randNum]; 
        arr[randNum] = temp;
    }    
}
 
 
void printCards(int arr[], int taken[], int arrSize) {
     
    printf("\n\n    0  1  2  3  4");
    printf("\n-----------------"); 
    int index;
    for (index = 0; index < arrSize; ++index) {
        if (index % COLS == 0) {
            printf("\n%d|", index / COLS);
        }
      
        if (taken[index] == 0) {
            printf(" * ");
        }
        else {
            printf(" %d ", arr[index]);
        }
    }
}