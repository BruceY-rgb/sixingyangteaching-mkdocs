/* ����4-7-3������1! + 2! + 3! + �� + n!��ʹ��һ��ѭ�� */

/* ���� 1! + 2! + 3! + �� + n! */
# include <stdio.h>
int main(void)
{
    int i, n;
    double item, sum;           /* ���� item �д�Ž׳˵�ֵ */

    printf("Enter n: ");        /* ������ʾ */
    scanf("%d", &n);
    sum = 0;
    item = 1; 
    for(i = 1; i <= n; i++){    /* ѭ��ִ��n�Σ����ۼӺ� */     
        item = item * i;        /* ���item = i! */
        sum = sum + item;       /* �� i! �ۼӵ�sum�� */
    }
    printf("1! + 2! + ... + %d! = %.0f\n", n, sum);   

    return 0;
}

