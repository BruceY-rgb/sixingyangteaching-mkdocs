/*����2-5����ֵ����������������ĳ�ʼֵ initial��Ŭ������factor�ͼ������day���������й�ʽ�������ֺ�ﵽ������ֵ�����ʱ������λС����*/
 
# include <stdio.h> 
# include <math.h>   /* �����е�������ѧ�⺯���������ͷ�ļ�math.h */ 
int main(void)
{
    int day;                         	/* ����1�����ͱ��� */
    double factor, initial, result; 	/* ����3��˫���ȸ����ͱ��� */

    printf("Enter initial:");         	/* ��ʾ���� initial */
    scanf("%lf", &initial);				/* ����scanf()��������, %lf �е�l����ĸ */
    printf("Enter factor:");          	/* ��ʾ���� factor */
    scanf("%lf", &factor); 				/* ����scanf()��������, %lf �е�l����ĸ */
    printf("Enter day:");				/*��ʾ���� day */
    scanf("%d", &day);					/* ����scanf()�������� */
    result = initial * pow(1 + factor, day);  /* �����ݺ���pow()���� */
    printf("result = %.2f\n", result); 

    return 0;
}

