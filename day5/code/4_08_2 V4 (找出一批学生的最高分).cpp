/* ����4-8-2������ֵ���⡣����һ��ѧ���ĳɼ����ҳ���߷֡� */

/* �������һ���Ը��������ĳɼ���ѡ����߷֣���while���ʵ�� */
#include <stdio.h>
int main(void)
{
    int mark, max;            	         /* max�з���߷� */

    printf("Enter marks:");    	         /* ������ʾ */
    scanf ("%d", &mark);     	         /* �����һ���ɼ� */
    max = mark;            	             /* �����һ���ɼ�����߷� */
    /*  ������ĳɼ� mark ���ڵ���0ʱ��ִ��ѭ�� */
    while(mark >= 0){
        if(max < mark){      	         /* �������ĳɼ�����߷ָ� */
            max = mark ;     	         /* �ټ���óɼ�Ϊ��߷� */
        } 
		scanf ("%d", &mark ) ; 	         /* ������һ���ɼ� */
    };
    printf("Max = %d\n", max);

    return 0;
}
