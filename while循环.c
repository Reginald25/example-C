#include<windows.h>
#include<stdio.h>
main()
{
    int x,d;
    x=12345;
    while(x>0)
    {
        d=x%10;
        printf("%d",d);
        x=x/10;
    }
    system("pause");
    return 0;
}
