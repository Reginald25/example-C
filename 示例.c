#include  "stdio.h"
#include "conio.h"
#include<windows.h>
main()
{
    char c1,c2,c3;
    c1=getch();
    putchar(c1);putchar('\n');
    c2 = getche();
    putchar(c2);putchar('\n');
    c3 = getchar();
    putchar(c3);
    system("\npause");

    return 0;
}
