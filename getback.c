/*Demonstrates using the gets() return value.*/

#include<stdio.h>
#include<windows.h>

/*Declare a character array to hold input.and a pointer*/

char input[257],*ptr;

int main(void)
{
    /*Display instructions.*/

    puts("Enter text a line at a time,then press Enter.");
    puts("Enter a blank line when done.");

    /*Loop as long as input is not a blank line.*/

    while( *(ptr = gets(input)) ! = NULL)
        printf("Thank you and good-bye\n");

    system("pause");

    return 0;
}
