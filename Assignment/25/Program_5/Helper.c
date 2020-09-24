/////////////////////////////////////////////////////
//
//Function Name : DisplaySchedule
//Input : Character
//Output : None
//Description : It is used to display the shedule of division.
//Author : Tejas A. Bora
//Date : 20 Aug 2020
//
/////////////////////////////////////////////////////

#include "Header.h"

void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
    case 'A':
        printf("Your Exam time at 7 AM\n");
        break;
    case 'B':
        printf("Your Exam time at 8:30 AM\n");
        break;
    case 'C':
        printf("Your Exam time at 9:20 AM\n");
        break;
    case 'D':
        printf("Your Exam time at 10:30 AM\n");
        break;

    default:
        printf("ERROR : Division Not Found\n");
        break;
    }
}