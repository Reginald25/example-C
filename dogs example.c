#include<stdio.h>
#include<windows.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d",&dogs);
    printf("So you have %d dog(s)!\n",dogs);
    system("pause");
    return 0;
}
