/*����2-9���Ӽ�������һ��������n������ n! ��*/

/*  ����һ��������n���� n!  */
#include <stdio.h>
int main(void)
{    
    int i, n;
    double product;			    /* ����product�д�Ž׳˵�ֵ */

    printf("Enter n: ");  	    /* ������ʾ */
    scanf("%d", &n);
    product = 1;         	    /* �ý׳�product�ĳ�ֵΪ1 */
    for (i = 1; i <= n; i++){  	/* ѭ��ִ��n�Σ�����n! */
        product = product * i;
    }
    printf("product = %.0f\n", product);/* %.0fָ�����ʱ��ҪС������ */

    return 0;
}


