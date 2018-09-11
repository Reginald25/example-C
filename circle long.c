#include<stdio.h>
#include<windows.h>>
#define PI 3.14
int main()
{
    int r = 0;
    float c = 0,s = 0;
    printf("请输入圆的半径：\n");
    scanf("%d",&r);
    c = 2*PI*r;
    s =PI*r*r;
    printf("圆的周长c=%6.2f\n圆的面积s=%6.2f\n",c,s);
    system("pause");
    return 0;
}
