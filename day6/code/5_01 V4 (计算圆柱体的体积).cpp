/*����5-1������Բ���ĸߺͰ뾶����Բ�������volume=3.1415926*r*r*h��Ҫ����͵��ú���cylinder (r, h )����Բ���������� */

/* ����Բ����� */
#include <stdio.h>
double cylinder(double r, double h);		/* ��������*/
int main( void )
{
	double height, radius, volume;					

	printf("Enter radius and height: ");	    /* ������ʾ */
	scanf("%lf%lf", &radius, &height);		    /* ����Բ���İ뾶�͸߶� */
	volume = cylinder(radius, height );			/* ���ú���������ֵ����volume */
	printf("Volume = %.3f\n", volume);			/*���Բ������� */
	
	return  0;
}

/* ������Բ������ĺ��� */
double cylinder(double r, double h)	
{
	double result;
	
	result = 3.1415926 * r * r * h;    			/* ����Բ����� */
	
	return result;								/* ���ؽ�� */
}
