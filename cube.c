#include<stdio.h>
#include<windows.h>

long cube(long x);
long input,answer;

int main(void)
{
    printf("Enter an integer value:");
    scanf("%d",&input);
    answer=cube(input);
    printf("\nThe cube of %d is %1d.\n",input,answer);

    system("pause");

    return 0;
}

long cube(long x)
{
    long x_cubed;

    x_cubed = x*x*x;
    return x_cubed;
}
