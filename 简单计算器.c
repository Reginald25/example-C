#include <stdio.h>

int main()
{
	float x1, x2;
	float sum, sub, mul, div;
	int r;
	//因为求余数的结果是整数，所以定义r为整型
	printf("请输入两个整数，用空格隔开：\n");
	scanf("%f%f", &x1, &x2);
	sum = x1 + x2;
	sub = x1 - x2;
	mul = x1 * x2;
	div = x1 / x2;
	r = (int) x1 % (int) x2;
	//因为求余运算只对整数有效，（int）x1的作用是对x1取整
	printf("sum = %6.2f, sub = %6.2f\n", sum, sub);
	//%6.2f控制输出数字占6位宽，保留2位小数
	printf("mul = %6.2f, div = %6.2f\n", mul, div);
	printf("r = %4d\n", r);
	return 0;
}
