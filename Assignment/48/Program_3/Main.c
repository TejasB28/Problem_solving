/*
Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void DisplayDataF(char *Fname)
{
    int fd = 0;
    int iRet = 0;
    char EArr[100] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if (fd == -1)
    {
        printf("ERROR : Unable to Open File\n");
    }

    while ((iRet = read(fd, EArr, 100)) != 0)
    {
        write(1, EArr, iRet);
    }
    close(fd);
}

int main()
{
    char FName[50] = {'\0'};

    printf("Enter the File Name :\n");
    scanf("%s", FName);

    DisplayDataF(FName);

    return 0;
}