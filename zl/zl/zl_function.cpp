#include <stdio.h>

double area_circle(double r)
{
	double s = 3.14*r*r;
	return s;
};

void swap(double *p, double*q)//����p��q�Ĳ���
{
	double c;
	c = *p;
	*p = *q;
	*q = c;
}
void print_all_element(double *p, int num)
{
	for (int i = 0; i <= num - 1; i++)//p��һά������׵�ַ��num������ĳ���
	{
		printf("%3lf ", *(p + i));
	}
}
void  add(double*p, int len, double* sum)//�ۼӣ�*p��һά������׵�ַ��len�ǳ��ȣ�sum�����
{
	*sum = p[0];
	for (int i = 0; i <= len - 2; i++)
	{
		*sum = *sum + p[i + 1];

	}
	printf("%lf\n", *sum);
}

void max(double *p, int len, double*out)//��һά��������ֵ
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
void min(double *p, int len, double*out)//��һά��������ֵ
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
void  avg_1arry(double*p, int len, double* avg)//ƽ��ֵ����ӡһά�����ƽ��ֵ��len�ǳ��ȣ�avg�����
{
	double sum = p[0];
	for (int i = 0; i <= len - 2; i++)
	{
		sum = sum + p[i + 1];

	}
	*avg = sum / len;
	printf("%lf\n", *avg);
}