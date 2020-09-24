/*
Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void OpenFileR(char *FName)
{
    int fd = 0;

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("ERROR : Unable to open File\n");
    }
    else
    {
        printf("File Opened SucessFully\n");
    }

    close(fd);
}

int main()
{
    char FName[50] = {'\0'};

    printf("Enter File Name :\n");
    scanf("%s", FName);

    OpenFileR(FName);

    return 0;
}