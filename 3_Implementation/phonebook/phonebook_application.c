#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "phonebook.h"
#include "conio.h"


void menu();
void start();
void back();

int main()
{
    
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    system("cls");
printf("\t\t**********WELCOME TO PHONEBOOK*************");

printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.Exit   \t3.Modify  \n\t4.Search \t5.Delete");

switch(getch())
{
    case '1': addrecord();
    break;
    case '2': exit(0);
    break;
    case '3': modifyrecord();
    break;
    case '4': searchrecord();
    break;
    case '5': deleterecord();
    break;
    default:
                system("cls");
                printf("\nEnter 1 to 5 only");
                printf("\n Enter any key");
                getch();

menu();
}
}


      
