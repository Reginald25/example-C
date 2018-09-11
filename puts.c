/*Demonstrates displaying strings with puts()*/

#include<stdio.h>
#include<windows.h>

char *message1 = "C";
char *message2 = "is the";
char *message3 = "best";
char *message4 = "programming";
char *message5 = "language!!";

int main(void)
{
    puts(message1);
    puts(message2);
    puts(message3);
    puts(message4);
    puts(message5);

    system("pause");

    return 0;
}
