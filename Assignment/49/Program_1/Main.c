/*
Write a program which accepts file name from user and count number of
capital characters from that file.
Input : Demo.txt
Output : Number of capital characters are 23
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int CountCapitalF(char *Fname)
{
    int fd = 0;
    int iRet = 0;
    int iCaps = 0;
    int i = 0;
    char str[100] = {'\0'};

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("ERROR : Unable to open File\n");
        return -1;
    }

    while ((iRet = read(fd, str, 100)) != 0)
    {
        for (i = 0;)
    }
    close(fd);
    return iCaps;
}

int main()
{
    char FName[50] = {'\0'};
    int iRet = 0;

    printf("Enter File Name :\n");
    scanf("%s", FName);

    iRet = CountCapitalF(FName);

    printf("Capital Characters in File : %d\n", iRet);

    return 0;
}