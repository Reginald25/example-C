#include<stdio.h>
#include<windows.h>
int main(void)
{
    int feet,fathoms;
    printf("Please input your data\n");
    scanf("%d",&fathoms);
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n",feet,fathoms);
    printf("Yes,I said %d feet!\n",6*fathoms);
    system("pause");

    return 0;
}
