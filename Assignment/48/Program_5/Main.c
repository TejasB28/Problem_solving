/*
Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
Hello World
Output : Write Hello World at the end of Demo.txt file
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void AppendFile(char *FName, char *str)
{
    int fd = 0;
    int iRet = 0, iLength = 0;

    fd = open(FName, O_APPEND | O_WRONLY, 0777);

    if (fd == -1)
    {
        printf("ERROR : Unable to Open File\n");
        return;
    }

    iLength = strlen(str);
    iRet = write(fd, str, iLength);
    if (iRet == -1)
    {
        printf("ERROR : Unable to Append data in file\n");
    }
    else
    {
        printf("Data Append Sucessfully in File\n");
    }
}

int main()
{
    char FName[50] = {'\0'};
    char cStr[100] = {'\0'};

    printf("Enter File Name :\n");
    scanf("%s", FName);

    printf("Enter the String :\n");
    scanf(" %[^'\n']s", cStr);

    AppendFile(FName, cStr);

    return 0;
}//End of Main