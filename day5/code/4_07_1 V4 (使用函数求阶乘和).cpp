/*����4-7-1��ʹ�ú�����׳˺͡�����1! + 2! + 3! + �� + n!��Ҫ����͵��ú���fact(n)����n�Ľ׳ˣ����n�ǷǸ���������ú�������n�Ľ׳ˣ����򷵻�0��*/ 

/* ʹ�ú������� 1! + 2! + 3! + �� + n! */
# include <stdio.h>
double fact (int n);           	/* �������� */
int main(void)
{
    int i, n;
    double sum;

    printf("Enter n: "); 		/* ������ʾ */
    scanf("%d", &n);
    sum = 0;
    for(i = 1; i <= n; i++ ){
        sum = sum + fact (i); 	/* ����fact(i)��i!�����ظ�n�� */
    }
    printf("1! + 2! + ... + %d! = %.0f\n", n, sum);   

	return 0;
}
/* ������ n! �ĺ��� */
double fact (int n)
{
    int i;			 
    double result;              /* ���� result �д�Ž׳˵�ֵ */

    if ( n < 0 ) {				/* ���nΪ���������׳�Ϊ0 */
        return 0; 				
    }
    result = 1;                	/* �ý׳� result �ĳ�ֵΪ1 */
    for(i = 1; i <= n; i++){    /* ѭ��ִ��n�Σ�����n! */
        result = result * i;
    }

    return  result;          	 /* �ѽ������������ */
}

