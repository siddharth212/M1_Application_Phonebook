#ifndef COMPLEX_H
#define COMPLEX_H

/* Included to allow users to call functions from math library if required */
#include "math.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"


/* strcture definition must be reused by the users in their code */

struct person
{
    char name[35];
    long int mble_no;
    char sex[8];
    char mail[100];
     };

void got(char *name);
void menu();
void addrecord();
void modifyrecord();
void deleterecord();
void searchrecord();

#endif //#ifndef COMPLEX_H
