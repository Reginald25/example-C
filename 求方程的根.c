#include<windows.h>
#include"math.h"
main()
{
    float a,b,c,d,x1,x2,q;
    printf("Please input a,b,c\n");
    scanf("%4.2f,%f,%f",&a,&b,&c);
    d=b*b-4*a*c;
    q=sqrt(d);
    x1= (-b+q)/(2*a);
    x2=(-b-q)/(2*a);
    printf("d=%.2f,x1=%.2f,x2=%.2f\n",d,x1,x2);
    system("pause");
    return 0;
}
