
#include <stdio.h>
#include <stdlib.h>
#include "externalFunctions.h"

int readInteger(){
    int num;
    scanf("%d", &num);
    return num;
}

char * readString(){
    char * tempString = "";
    fgets(tempString, CHARSIZE, stdin);
    return tempString;
}
int main() {
    char garbage[CHARSIZE];
    puts("Leggo un intero utilizzando la funzione scanf");
    int num = readInteger();
    printf("Il numero ricevuto è %d \n", num);
    puts("uso la stringa \" garbage \" per eliminare eventuali caratteri newline");
    fgets(garbage, CHARSIZE, stdin);
    puts("Ora uso fgets per gestire una stringa di 20 caratteri");
    char * string1;
    string1 = malloc(CHARSIZE);
    fgets(string1, CHARSIZE, stdin);
    //se non specifico malloc, indicando la size, il comando fgets mi restituisce l'errore -1073741819 (0xC0000005)
    printf("Hai inserito la stringa: %s\n", string1);
    puts("Ora chiamerò la funzione esterna, usando sempre fgets \n");
    string1 = extReadString();
    printf("Hai inserito la stringa: %s\n", string1);
    puts("Termino il programma\n");


    return 0;
}