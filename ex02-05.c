#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(void)
{
    char buffer[256];

    printf("Enter your name and press <Enter>:\n");
    gets(buffer);

    printf("\nYour name has %d characters and spaces!\n",strlen(buffer));
    system("pause");
    return 0;
}
