/*����5-2�� ��������ε��������һ������ηָ�����������Σ�ͼ5.1����������Щ�����ε�7���߳������������ε������Ҫ����͵��ú���area(x,y,z)����߳�Ϊx��y��z������������� */

/* ��������ε���� */
# include <stdio.h>
# include <math.h>
int main (void)
{
	double a1, a2, a3, a4, a5, a6, a7,s;
	double area(double x,double y,double z);		/* �������� */
	
	printf("Please input 7 side lengths in the order a1 to a7:\n");
	scanf("%lf%lf%lf%lf%lf%lf%lf", &a1, &a2, &a3, &a4, &a5, &a6, &a7);
	s = area(a1,a5,a6) + area(a4,a6,a7) + area(a2,a3,a7);/* ��������area���� */
	printf("The area of the Pentagon is %.2f\n",s) ;
	
	return 0;
}
/* ʹ�ú���-�ؾ��ع�ʽ��������������ĺ��� */
double area(double x,double y,double z) 		/* �����ײ� */
{
	double p = (x + y + z) / 2;
	
	return sqrt(p * ( p - x ) * ( p - y ) * ( p - z )) ; 		 
}

