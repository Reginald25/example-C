/*Demonstrates the use of if statement with else clause*/

#include<stdio.h>
#include<windows.h>
int x,y;

int main(void)
{
    /*Input the two values to be tested*/

    printf("\nInput an integar value for x:");
    scanf("%d",&x);
    printf("\nInput an integar value for y:");
    scanf("%d",&y);

    /*Test values and print result*/

    if(x==y)
        printf("x is equal to y\n");
    else
        if(x>y)
            printf("x is greater than y\n");
        else
            printf("x is smaller than y\n");
            system("pause");
        return 0;
}
