//
// Created by zioto on 01/05/2018.
//

#include "externalFunctions.h"
#include <stdio.h>
#include <stdlib.h>


char * extReadString(){
  char * string;
    string = malloc(CHARSIZE);
    //se non specifico malloc, indicando la size, il comando fgets mi restituisce l'errore -1073741819 (0xC0000005)
    fgets(string, CHARSIZE, stdin);
    return string;
};