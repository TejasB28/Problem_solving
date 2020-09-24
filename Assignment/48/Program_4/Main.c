/*
Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int SizeOfFile(char *FName)
{
    int fd = 0;
    int iRet = 0;
    char arr[100] = {'\0'};

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Error : Unable to open File\n");
        return -1;
    }

    iRet = lseek(fd, 0, SEEK_END);

    close(fd);
    return iRet;
}

int main()
{
    char FName[50] = {'\0'};
    int iRet = 0;

    printf("Enter the File Name :\n");
    scanf("%s", FName);

    iRet = SizeOfFile(FName);

    if (iRet == -1)
    {
        return -1;
    }
    else
    {
        printf("Size of File : %d", iRet);
    }

    return 0;
}