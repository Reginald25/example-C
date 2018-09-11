#include<stdio.h>
#include<windows.h>
int x,y;
int main(void)
{
    for (x=0;x<2500;x++,printf("\n"))
        for(y=0;y<10;y++)
        printf("X");
        system("pause");
    return 0;
}
