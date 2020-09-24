/*
Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully.
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void CreateFile(char *FName)
{
    int fd = 0;

    fd = creat(FName, 0777);

    if (fd == -1)
    {
        printf("ERROR : Unable to create File\n");
    }
    else
    {
        printf("File Created SucessFully\n");
    }
    close(fd);
}

int main()
{
    char Fname[50] = {'\0'};

    printf("Enter File Name :\n");
    scanf("%s", Fname);

    CreateFile(Fname);

    return 0;
}