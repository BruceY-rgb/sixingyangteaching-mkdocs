/* ����4-8-1������ֵ���⡣����һ��ѧ���ĳɼ����ҳ���߷� */

/*  �������n���ɼ���ѡ����߷֣���for���ʵ��  */
#include <stdio.h>
int main(void)
{
    int i, mark, max, n;            /* max�з���߷� */

    printf("Enter n: ");            /* ������ʾ */
    scanf("%d", &n);                /* �������ݸ��� */
    printf("Enter %d marks: ", n);  /* ��ʾ����n���ɼ� */
    scanf("%d", &mark);             /* �����һ���ɼ� */
    max = mark;          	        /* �����һ���ɼ�����߷� */
    for(i = 1; i < n; i++ ){        /* �����Ѿ�����һ������ѭ��ִ��n-1�� */
        scanf ("%d", &mark); 	    /* ������һ���ɼ� */
        if(max < mark){      	    /* ����óɼ�����߷ָ� */
            max = mark;      	    /* �ټ���óɼ�Ϊ��߷� */
    	} 
	} 
    printf("Max = %d\n", max);

    return 0;
}
