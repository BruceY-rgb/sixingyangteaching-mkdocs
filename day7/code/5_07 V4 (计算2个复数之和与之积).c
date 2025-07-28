/*����5-7������2������֮����֮�����ֱ�����2��������ʵ�����鲿���ú���ʵ�ּ���2������֮����֮����
��2�������ֱ�Ϊ��c1 = x1 + (y1)i, c2 = x2 +(y2)i����
	c1 + c2 = (x1+x2) + (y1+y2)i
	c1 * c2 = (x1*x2 - y1*y2) + (x1*y2 + x2*y1)i
*/ 
/* ����2������֮����֮�� */  
#include <stdio.h> 

void complex_prod(double real1, double imag1, double real2, double imag2);
void complex_add(double real1, double imag1, double real2, double imag2);

double result_real, result_imag;			/*  ȫ�ֱ��������ڴ�ź������  */

int main(void) 
{ 
	double imag1, imag2, real1, real2;		/* ����������ʵ���鲿���� */

	printf("Enter 1st complex number(real and imaginary): ");	
	scanf("%lf%lf", &real1, &imag1); 			/* �����һ������ */
	printf("Enter 2nd complex number(real and imaginary): ");	
	scanf("%lf%lf", &real2, &imag2); 			/* ������������� */
    complex_add(real1, imag1, real2, imag2);	/* ����֮�� */
    printf("addition of complex is %f+%fi\n", result_real, result_imag);
    complex_prod(real1, imag1, real2, imag2); 	/* ����֮�� */
	printf("product of complex is %f+%fi\n", result_real, result_imag);
	
	return 0;
}

/* ��������֮�ͺ��� */ 
void complex_add(double real1, double imag1, double real2, double imag2)
{
	result_real = real1 + real2;
	result_imag = imag1 + imag2;
	
	return;
}

/* ��������֮������ */
void complex_prod(double real1, double imag1, double real2, double imag2)
{
	result_real = real1*real2 - imag1*imag2;
	result_imag = real1*imag2 + real2*imag1;
	
	return;
}


