/*����2-3�������¶� 100��F ��Ӧ�������¶ȡ����㹫ʽ��c=5*(f-32)/9��ʽ�У�c��ʾ�����¶ȣ�f��ʾ�����¶ȡ�*/

/* �������¶�ת��Ϊ�����¶� */
#include <stdio.h>
int main(void)
{   
    /* �����������ͱ�����celsius��ʾ���϶ȣ�fahr��ʾ���϶� */
    int celsius, fahr;  
										/* ���У����ڷָ���������Ϳ�ִ����� */
    fahr = 100;                         /* �Ա���fahr ��ֵ */
    celsius = 5 * (fahr - 32) / 9;		/* �¶�ת������ */ 
    /* ����printf���������� */
    printf("fahr = %d, celsius = %d\n", fahr, celsius); 

   return 0;
}

