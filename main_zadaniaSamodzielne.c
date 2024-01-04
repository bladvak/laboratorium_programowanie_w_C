#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int randomNumber(){
    srand(time(NULL));
    return rand() % 100;
}

int rok(int r){
    if( ((r%4==0) && (r%100!=0)) || !(r%400))
    return 1;

    return 0;
}

int findDigit(char text[200]){
    int counter=0;
    for(int i=0; i<200; i++)
        if(isdigit(text[i]))
            counter++;
    return counter;
}

void printTranspositionArray(int tab[3][3]){
   // int transposed[3][3];
    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf(" %i", tab[j][i]);
        }}

    
}

int charCount(char tab[4][4], char c){
    int counter =0;
    for(int i =0; i<4;i++)
        for(int j=0; j<4; j++)
            if(tab[i][j] == c)
            counter++;
    return counter;
}

int main(){

printf("\n Twoja liczba losowa to: %i", randomNumber());

int tab[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
printTranspositionArray(tab);

    return 0;
}