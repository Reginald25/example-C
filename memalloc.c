/*Demonstrates the use of malloc() to allocate storage*/
/*space for string data*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

char count ,*ptr,*p;

int main(void)
{
    /*Allocate a block of 35 bytes.Test for success.*/
    /*The exit() library function terminates the program.*/

    ptr = malloc(35*sizeof(char));

    if(ptr == NULL)
    {
        puts("Memory allocation error.");
        return 1;
    }

    p=ptr;

    for(count = 65;count<91;count++)
        *p++=count;
    *p = '\0';

    puts(ptr);

    free(ptr);

    system("pause");

    return 0;
}
