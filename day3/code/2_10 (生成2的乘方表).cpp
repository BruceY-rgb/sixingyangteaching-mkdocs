/*����2-10������һ��������n������һ��2�ĳ˷���*/

/* �����ݺ���pow()���ɳ˷��� */
#include <stdio.h>
#include <math.h>   /* �����е�������ѧ�⺯���������ͷ�ļ�math.h */
int main(void)
{    
    int i, n;
    double power;

    printf("Enter n:");  	        /* ������ʾ */
    scanf("%d", &n); 
    for (i = 0; i <= n ; i++){
        power = pow(2, i);          /* �����ݺ���pow(2,i)����2��i�η� */
        printf("pow(2,%d)= %.0f\n", i, power);
    }

   return 0;
}
