/* ʹ�ú��������Լ�������庯��gcd(int m��int n)������m��n�����Լ���� */

/* ʹ�ú��������Լ�� */
#include <stdio.h>

int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

/* ����շת����������Լ���ĺ��� */
int gcd(int m,int n) 			/* ���������Լ������gcd() */
{
		int r, temp;		
		
		if(m < n){ 			/* ���mС��n���򽻻�m��n��ֵ */
			temp = m; 
			m = n; 
			n = temp;
		}
		r = m % n;
		while(r != 0){
			m = n;
			n = r;
			r = m % n;
		}
		return n;
}



