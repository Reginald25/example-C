#include<stdio.h>
#include<windows.h>

int length,width;
long area;

struct coord
{
 int x;
 int y;
}
myPoint;

int main(void)
{
    myPoint.x =12;
    myPoint.y =14;

    printf("\nThe coordinates are:(%d,%d).\n",myPoint.x,myPoint.y);

    system("pause");
    return 0;
}
