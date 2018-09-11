#include <stdio.h>
#include <math.h>		

int main()
{
	float x1, x2;
	float sum, sub, mul, div;
	int r;
	float x, y;
	float sqrx, powx, logx, sinx, cosx;
	double expx;		//指数函数结果有可能比较大，定义为double型
	printf("请输入两个浮点数，用空格隔开：\n");
	scanf("%f%f", &x1, &x2);
	sum = x1 + x2;
	sub = x1 - x2;
	mul = x1 * x2;
	div = x1 / x2;
	r = (int) x1 % (int) x2;
	printf("sum = %6.2f, sub = %10.2f\n", sum, sub);
	printf("mul = %6.2f, div = %10.2f\n", mul, div);
	printf("r = %4d\n", r);
	//再次输入两个浮点数
	printf("再次输入两个浮点数，用空格隔开:\n");
	scanf("%f%f", &x, &y);
	sqrx = sqrt(x);			//求x的平方根
	powx = pow(x, y);		//求x的y次方
	expx = exp(x);			//求e的x次方
	logx = log10(x);		//求x的以10为底的对数
	sinx = sin(x);			//求x的正弦值
	cosx = cos(x);			//求x的余弦值
	printf("\nsqrt = %6.2f, powx = %6.2f\n", sqrx, powx);
	//%6.2f控制输出数字占6位宽，保留2位小数
	printf("expx = %6.2lf, logx = %6.2f\n", expx, logx);
	printf("sinx = %6.2f, cosx = %6.2f\n", sinx, cosx);
	return 0;
}