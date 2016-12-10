#include <stdio.h>

double area_circle(double r)
{
	double s = 3.14*r*r;
	return s;
};

void swap(double *p, double*q)//交换p，q的参数
{
	double c;
	c = *p;
	*p = *q;
	*q = c;
}
void print_all_element(double *p, int num)
{
	for (int i = 0; i <= num - 1; i++)//p是一维数组的首地址，num是数组的长度
	{
		printf("%3lf ", *(p + i));
	}
}
void  add(double*p, int len, double* sum)//累加，*p是一维数组的首地址，len是长度，sum是输出
{
	*sum = p[0];
	for (int i = 0; i <= len - 2; i++)
	{
		*sum = *sum + p[i + 1];

	}
	printf("%lf\n", *sum);
}

void max(double *p, int len, double*out)//求一维数组的最大值
{
	double max_num = p[0];
	for (int i = 0; i <= len - 2; i++)
	{
		if (max_num - p[i + 1] < 0)

		{
			max_num = p[i + 1];
		}

	}
	*out = max_num;
	printf("%lf", *out);
}
void min(double *p, int len, double*out)//求一维数组的最大值
{
	double max_num = p[0];
	for (int i = 0; i <= len - 2; i++)
	{
		if (max_num - p[i + 1] > 0)

		{
			max_num = p[i + 1];
		}

	}
	*out = max_num;
	printf("%lf", *out);
}
void  avg_1arry(double*p, int len, double* avg)//平均值，打印一维数组的平均值，len是长度，avg是输出
{
	double sum = p[0];
	for (int i = 0; i <= len - 2; i++)
	{
		sum = sum + p[i + 1];

	}
	*avg = sum / len;
	printf("%lf\n", *avg);
}