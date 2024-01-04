#include <stdio.h>
#include <string.h>


int main(){

char first[256], second[256];

printf("\npodaj pierwsze słowo: ");
fgets(first, 256, stdin);
printf("\npodaj drugie słowo: ");
fgets(second, 256, stdin);
char *concat;
int res = strcmp(first, second);
if(res == 0)
    printf("\nłańcuchy są takie same!");
else if (res < 0)
    printf("\n łańcuchy się różnią!");
 
int firstLen = strlen(first);
int secondLen = strlen(second);

if(firstLen > secondLen){
    strcat(first, second);
    printf("\nwyrazy połączone to : %s", first);
} else {
    strcat(second, first);
    printf("\nwyrazy połączone to : %s", second);
}

    return 0;
}