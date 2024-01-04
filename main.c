#include <stdio.h>
#include <math.h>
#include "fibo.h"

double foo1(double n){
    return n/2 + 2;
}

float min(float a, float b, float c){
    float x = a;
    if(b < x)
        x = b;
    if(c < x)
        x = c;
    return x;
}

void printLine(int width, char c){
    for(int i = 0; i < width; i++)
        putchar(c);
}

void printRectangle(int height, int width, char c){
    printf("\n");
    for(int i = 0; i < height; i++){
        if(i == 0 || i == (height-1))
            printLine(width, c);
        else {
            printLine(1, c);
            printLine(width-2, ' ');
            printLine(1, c);
        }
        printf("\n");
    }
}

float mean(int *numbers, int length){
    float sum = 0;
    for(int i=0; i<length; i++)
        sum += *(numbers+i);
    return sum/length;
}

void reverse(int *numbers, int len){
    int ct = len/2;
    for(int i=0; i<ct; i++){
        float temp = *(numbers+i);
        *(numbers+i) = *(numbers+len-1-i);
        *(numbers+len-1-i) = temp;
    }
}

void main(){

printf("\n wynik zadania 1 :  %f", foo1(7));

//printLine(8,'+');

//printRectangle(6, 8, '+');

//printf("\n wynik funkcji fibo: %f", fibo(12));

int tab[20];
for(int i=0; i<20; i++)
    tab[i] = pow(2, i);

printf("\nkolejne potęgi liczby 2 to:");
for(int i =0; i < (sizeof(tab)/sizeof(int)); i++){
    printf(" %i,", tab[i]);
}

printf("\nwczytywanie 20 liczb z stdin do tablicy:");
int count = 0;
//while(scanf("%i", tab+count) && count < 20)
//    count++;
//for(int i =0; i < (sizeof(tab)/sizeof(int)); i++){
//    printf(" %i,", tab[i]);
//}

printf("\n średnia arytmetyczna z tablicy: %f", mean(tab, 20));

printf("\n tablica po funkcji reversed: ");
reverse(tab, 20);
for(int i =0; i < (sizeof(tab)/sizeof(int)); i++){
    printf(" %i,", tab[i]);
}
printf("\n");
int second[3][3];
for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
        scanf("%i", second[i]+j);

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
        printf(" %i",second[i][j]);
    printf("\n");
}


}