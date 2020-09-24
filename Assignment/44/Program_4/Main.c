#include <stdio.h>

void Display()
{
    static int iNo = 0;
    if (iNo < 6)
    {
        printf("%c\t", 'A' + iNo);
        iNo++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}