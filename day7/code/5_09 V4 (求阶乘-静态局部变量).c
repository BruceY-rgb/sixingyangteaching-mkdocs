/* �����䡿����������n�����1��~n����ֵ��Ҫ���岢���ú���̬�����ĺ���fact_s(n)����n���� */
#include <stdio.h>
double fact_s(int n);

int main(void)
{
    int i, n;
    
	printf("Input n:");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){ 
		printf("%3d!=%.0f\n", i, fact_s(i));	/* ���i��i! */
	} 

	return 0;
} 

double fact_s(int n)
{
    static double f = 1;		/* ���徲̬��������һ�θ�ֵΪ0 */
    
	f = f * n;					/* ����һ�ε���ʱ��ֵ�ϳ�n */

	return(f);
}
