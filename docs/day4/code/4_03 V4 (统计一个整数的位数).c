/* ����4-3���Ӽ��̶���һ��������ͳ�Ƹ�����λ�������磬����12534�����5������-99�����2������0�����1�� */
 
/* ͳ��һ��������λ�� */
# include <stdio.h>
int main(void)
{   
    int count, number, t_number;    /* count ��¼����number��λ�� */

    count = 0;
    printf("Enter a number:");      /* ������ʾ */
    scanf ("%d", &number);
    t_number = number; 				/* ������������number��ֵ�����ı� */
    if(t_number < 0) {				/* ������ĸ���ת��Ϊ���� */
    	t_number = -t_number; 
    }
    do{	                    			
        count++;                   	/* λ����1 */
        t_number = t_number / 10;   /* ���������һλ��λ�������һ������ */
    }while(t_number != 0);           /* �ж�ѭ������ */
    printf("It contains %d digits.\n", count);

    return 0;
}


