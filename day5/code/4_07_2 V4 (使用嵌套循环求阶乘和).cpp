/* ����4-7-2������1! + 2! + 3! + �� + n!��Ҫ��ʹ��Ƕ��ѭ����*/

/* ʹ��Ƕ��ѭ������ 1! + 2! + 3! + �� + n! */
# include <stdio.h>
int main(void)
{
    int i, j, n;
    double item, sum;               /* ���� item �д�Ž׳˵�ֵ */

    printf("Enter n: ");            /* ������ʾ */
    scanf("%d", &n);
	sum = 0;
	for(i = 1; i <= n; i++){  		/* ���ѭ��ִ��n�Σ����ۼӺ� */
	    item = 1;    	    		/* �� item �ĳ�ֵΪ1���Ա�֤ÿ����׳˶���1��ʼ���� */
	    for(j = 1; j <= i; j++){	/* �ڲ�ѭ���ظ�i�Σ����item = i! */
		      item = item * j;
	    }
	    sum = sum + item;  			/* �ۼ� i! */
	}
    printf("1! + 2! + ... + %d! = %.0f\n", n, sum);   

    return 0;
}

