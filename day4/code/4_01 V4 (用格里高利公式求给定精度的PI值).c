/* ����4-1��ʹ�ø��������ʽ��еĽ���ֵ��Ҫ��ȷ�����һ��ľ���ֵС�ڸ�������eps��*/

/*  �ø��������ʽ����еĽ���ֵ������Ҫ�����һ��ľ���ֵС�ڸ�������eps  */
#include <stdio.h>
#include <math.h>        		/* �����е��þ���ֵ���� fabs()������� math.h */
int main(void)
{
    int denominator, flag, i; 
    double eps, item, pi;        /* pi ���ڴ���ۼӺ� */

    printf("Enter eps:");   		/* ��ʾ���뾫��eps */
    scanf ("%lf", &eps);

    /* ѭ����ʼ�� */
    i = 1;              		/* i ��ʾ��ǰ������ */
    flag = 1;              		/* flag ��ʾ�� i ��ķ��ţ���ʼΪ�� */
    denominator = 1;      		/* denominator��ʾ�� i ��ķ�ĸ����ʼΪ1 */
    item = 1.0;         		/* item �д�ŵ� i ���ֵ����ֵȡ��1���ֵ */
    pi = 0;                		/* ���ۼӺ� pi �ĳ�ֵΪ0 */
    while(fabs(item) >= eps){   /* ��|item| �� epsʱ��ִ��ѭ�� */
        pi = pi + item;         			/* �ۼӵ� i ���ֵ */
        i++;          						/* ������1��Ϊ��һ��ѭ����׼�� */
        flag = -flag;              			/* �ı���ţ�Ϊ��һ��ѭ����׼�� */
        denominator = denominator + 2;  	/* ��ĸ����2 ��Ϊ��һ��ѭ����׼�� */
        item = flag * 1.0 / denominator; 	/* �����i���ֵ��Ϊ��һ��ѭ����׼�� */
    }
    pi = pi + item;            	/* �������һ���ֵ */
    pi = pi * 4;               	/* ѭ������Ľ���� pi/4 */
    printf ("pi = %.4f\n", pi);
    printf ("i = %d\n", i); 	/* �˴�i��ֵΪ���һ������� */

    return 0;
}


