/* ʹ�ú����ж���ȫƽ����������һ���ж���ȫƽ�����ĺ���IsSquare(n)����nΪ��ȫƽ����ʱ����1�����򷵻�0�������������ѧ�⺯���� */

/* ʹ�ú����ж���ȫƽ���� */
#include <stdio.h>
#include <math.h>

int IsSquare( int n );

int main()
{
    int n;

    scanf("%d", &n);
    if ( IsSquare(n) ){
		printf("YES\n");
	}else{
		printf("NO\n");
	} 

    return 0;
}

/* �ж���ȫƽ�����ĺ��� */
int IsSquare (int n)				/* �����ײ� */
{
		int i;
	
		for(i = 1; n > 0; i = i + 2){
			n = n - i;
		}
		if(n == 0){
			return 1; 		/* ����ȫƽ��������1 */
		}else{
			return 0; 		/* ������ȫƽ��������0 */
		}							
}


